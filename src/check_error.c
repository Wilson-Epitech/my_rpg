/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include "all_struct.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int check_env(char **env)
{
    char *error = "DISPLAY variable not set\n";
    char *display_str = "DISPLAY=";

    for (int x = 0; env[x] != NULL; x++) {
        if (my_strncmp(display_str, env[x]) == 0) {
            return (0);
        }
    }
    write(2, error, my_strlen(error));
    return (0);
}

int check_error(int ac, char **env)
{
    char *error = "./rpg: bad arguments.\nretry with ./myrpg\n";
    if (ac != 1) {
        write(2, error, my_strlen(error));
        return (84);
    }

    if (check_env(env) == 84)
        return (84);

    return (0);
}
