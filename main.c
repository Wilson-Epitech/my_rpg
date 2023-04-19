/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include "all_struct.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
    RPG_t *rpg = malloc(sizeof(RPG_t));
    memset(rpg, 0, sizeof(RPG_t));
    init_inventory_menu(rpg);
    open_wdw(rpg);
    return 0;
}

