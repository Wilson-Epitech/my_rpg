/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include <string.h>
#include <stdlib.h>
#include "my.h"

int main(void)
{
    history_t *history = malloc(sizeof(history_t));
    menu_t *menu = malloc(sizeof(menu_t));
    maps_t *map = malloc(sizeof(maps_t));
    StructSprite *struct_sprite = malloc(sizeof(StructSprite));
    quest_t *quest = malloc(sizeof(quest_t));
    player_t *player = malloc(sizeof(player_t));
    memset(history, 0, sizeof(history_t));
    memset(menu, 0, sizeof(menu_t));
    memset(map, 0, sizeof(maps_t));
    memset(struct_sprite, 0, sizeof(StructSprite));
    memset(quest, 0, sizeof(quest_t));
    memset(player, 0, sizeof(player_t));
    open_wdw(history, menu, map, struct_sprite, quest);
    return 0;
}
