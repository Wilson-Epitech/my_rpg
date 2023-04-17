/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"

int main(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    maps_t *map = malloc(sizeof(maps_t));
    StructSprite *struct_sprite = malloc(sizeof(StructSprite));
    open_wdw(menu, map, struct_sprite);
    return 0;
}
