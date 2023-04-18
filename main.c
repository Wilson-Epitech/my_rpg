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
    history_t *history = malloc(sizeof(history_t));
    menu_t *menu = malloc(sizeof(menu_t));
    maps_t *map = malloc(sizeof(maps_t));
    StructSprite *struct_sprite = malloc(sizeof(StructSprite));
    quest_t *quest = malloc(sizeof(quest_t));
    open_wdw(history, menu, map, struct_sprite, quest);
    return 0;
}
