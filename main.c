/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include "all_struct.h"
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av, char **env)
{
    if (check_error(ac, env) == 84)
        return (84);
    RPG_t *rpg = malloc(sizeof(RPG_t));
    memset(rpg, 0, sizeof(RPG_t));
    open_wdw(rpg);
    return 0;
}
