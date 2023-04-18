/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** get_color_map1
*/

#include "maps.h"
#include "sprite.h"
#include "quest.h"

static void get_color_map_grandma(maps_t *map,
StructSprite *struct_sprite, quest_t *quest)
{
    sfColor portal;

    portal = sfImage_getPixel(map->map1,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 58 && portal.g == 188 && portal.b == 206) {
        map->check_path_map = MAP_1_TO_4;
        map->on_map = MAP4;
    }
    if (portal.r == 237 && portal.g == 185 && portal.b == 185) {
        quest->npc = GRANDMA;
    } else {
        quest->npc = NO_NPC;
    }
}

void get_color_map1(maps_t *map, StructSprite *struct_sprite, quest_t *quest)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map1,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 228 && portal.g == 35 && portal.b == 32) {
        map->check_path_map = MAP_1_TO_UPPER2;
        map->on_map = MAP2;
    }
    if (portal.r == 244 && portal.g == 148 && portal.b == 11) {
        map->check_path_map = MAP_1_TO_LOWER2;
        map->on_map = MAP2;
    }
    if (portal.r == 52 && portal.g == 15
    && portal.b == 237 && quest->main_quest == 2) {
        map->check_path_map = MAP_1_TO_DRAG;
        map->on_map = MAP5;
    }
    get_color_map_grandma(map, struct_sprite, quest);
}
