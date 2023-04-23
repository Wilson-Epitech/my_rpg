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
#include "all_struct.h"

void write_player_pos(int fd, sfSprite *player_sprite)
{
    sfVector2f player_pos = sfSprite_getPosition(player_sprite);

    int x = player_pos.x;
    int y = player_pos.y;
    char *player_pos_x = my_int_to_str(x);
    char *player_pos_y = my_int_to_str(y);
    write(fd, "player_pos:", my_strlen("player_pos:"));
    write(fd, player_pos_x, my_strlen(player_pos_x));
    write(fd, ";", my_strlen(";"));
    write(fd, player_pos_y, my_strlen(player_pos_y));
}

void write_player_stats(int fd, RPG_t *rpg)
{
    char *atk = my_int_to_str(rpg->player.atk);
    char *def = my_int_to_str(rpg->player.def);
    char *hp = my_int_to_str(rpg->player.hp);
    char *level = my_int_to_str(rpg->player.level);
    char *xp = my_int_to_str(rpg->player.xp);
    write(fd, "\natk:", my_strlen("\natk:"));
    write(fd, atk, my_strlen(atk));
    write(fd, "\ndef:", my_strlen("\ndef:"));
    write(fd, def, my_strlen(def));
    write(fd, "\nhp:", my_strlen("\nhp:"));
    write(fd, hp, my_strlen(hp));
    write(fd, "\nlevel:", my_strlen("\nlevel:"));
    write(fd, level, my_strlen(level));
    write(fd, "\nxp:", my_strlen("\nxp:"));
    write(fd, xp, my_strlen(xp));
}

void write_map_infos(int fd, RPG_t *rpg, int map_nb)
{
    char *map = my_int_to_str(map_nb);
    char *actual_quest = my_int_to_str(rpg->quest.main_quest);
    write(fd, "\nmap:", my_strlen("\nmap:"));
    write(fd, map, my_strlen(map));
    write(fd, "\nquest:", my_strlen("\nquest:"));
    write(fd, actual_quest, my_strlen(actual_quest));
}

void write_inventory_items_status(int fd, RPG_t *rpg)
{
    char *item1_status = my_int_to_str(rpg->item.display_item1);
    write(fd, "\nitem1_status:", my_strlen("\nitem1_status:"));
    write(fd, item1_status, my_strlen(item1_status));
    char *item2_status = my_int_to_str(rpg->item.display_item2);
    write(fd, "\nitem2_status:", my_strlen("\nitem2_status:"));
    write(fd, item2_status, my_strlen(item2_status));
}

int stock_in_config_file(RPG_t *rpg, sfSprite *player_sprite, int map_nb)
{
    int fd = open(".config", O_CREAT | O_RDWR | O_TRUNC, 00644);
    if (fd == -1)
        return (84);
    write_player_pos(fd, player_sprite);
    write_player_stats(fd, rpg);
    write_map_infos(fd, rpg, map_nb);
    write_inventory_items_status(fd, rpg);
    if ((close(fd)) == -1)
        return 84;
    return (0);
}
