/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "all_struct.h"

char *open_and_read(void)
{
    int fd = open(".config", O_RDONLY);
    if (fd < 0)
        return NULL;
    struct stat sb;
    stat(".config", &sb);
    if (sb.st_size == 0)
        return NULL;
    char *buffer = malloc(sizeof(char) * (sb.st_size + 1));
    if (buffer == NULL)
        return NULL;
    buffer[sb.st_size] = '\0';
    int check_read = read(fd, buffer, sb.st_size);
    if (check_read == -1)
        return NULL;
    close(fd);
    return buffer;
}

void fill_player_pos(RPG_t *rpg, char *str)
{
    char **array = word_array_delimiter(str, ";");
    int x = 0;
    while (array[x] != NULL)
        x++;

    if (x >= 1) {
        rpg->player.set_player_pos.x = my_getnbr(array[0]);
        rpg->player.set_player_pos.y = my_getnbr(array[1]);
    }
}

void fill_infos_before(RPG_t *rpg, char **array)
{
    for (int x = 0; array[x] != NULL; x++) {
        if (my_strncmp("player_pos:", array[x]) == 0) {
            fill_player_pos(rpg, array[x]);
        }
        if (my_strncmp("map:", array[x]) == 0) {
            rpg->map.on_map = my_getnbr(array[x]);
        }
        if (my_strncmp("quest:", array[x]) == 0) {
            rpg->quest.main_quest = my_getnbr(array[x]);
        }
    }
}

void fill_player_stats(RPG_t *rpg, char **array)
{
    for (int x = 0; array[x] != NULL; x++) {

        if (my_strncmp("atk:", array[x]) == 0) {
            rpg->player.atk = my_getnbr(array[x]);
        }
        if (my_strncmp("def:", array[x]) == 0) {
            rpg->player.def = my_getnbr(array[x]);
        }
        if (my_strncmp("hp:", array[x]) == 0) {
            rpg->player.hp = my_getnbr(array[x]);
        }
        if (my_strncmp("level:", array[x]) == 0) {
            rpg->player.level = my_getnbr(array[x]);
        }
        if (my_strncmp("xp:", array[x]) == 0) {
            rpg->player.xp = my_getnbr(array[x]);
        }
    }
}

int parse_config_file(RPG_t *rpg, int check_save)
{
    static int has_been_open = 0;
    static char *buffer = NULL;
    static char **array = NULL;

    if (has_been_open == 0) {
        buffer = open_and_read();
        if (buffer == NULL)
            return (84);
        array = word_array_delimiter(buffer, "\n");
        if (array == NULL)
            return (84);
    }
    if (check_save == 1)
        return (0);
    fill_infos_before(rpg, array);
    fill_player_stats(rpg, array);
    return (0);
}
