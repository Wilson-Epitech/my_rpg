/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** get_color_maps
*/

#include "maps.h"
#include "sprite.h"
#include "quest.h"

void get_color_map2(maps_t *map, StructSprite *struct_sprite)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map2,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 85 && portal.g == 69 && portal.b == 149) {
        map->check_path_map = MAP_2_TO_1UPPER;
        map->on_map = MAP1;
    }
    if (portal.r == 24 && portal.g == 232 && portal.b == 152) {
        map->check_path_map = MAP_2_TO_1LOWER;
        map->on_map = MAP1;
    }
    if (portal.r == 99 && portal.g == 16 && portal.b == 196) {
        map->check_path_map = MAP_2_TO_3;
        map->on_map = MAP3;
    }
}

void get_color_map3(maps_t *map, StructSprite *struct_sprite, quest_t *quest)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map3,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 182 && portal.g == 252 && portal.b == 174) {
        map->check_path_map = MAP_3_TO_2;
        map->on_map = MAP2;
    }
    if (portal.r == 196 && portal.g == 165 && portal.b == 38) {
        map->check_path_map = MAP_3_TO_4;
        map->on_map = MAP4;
    }
    if (portal.r == 22 && portal.g == 165 && portal.b == 165) {
        quest->npc = SHAOLIN;
    } else {
        quest->npc = NO_NPC;
    }
}

void get_color_map4(maps_t *map, StructSprite *struct_sprite)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map4,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 96 && portal.g == 9 && portal.b == 96) {
        map->check_path_map = MAP_4_TO_3;
        map->on_map = MAP3;
    }
    if (portal.r == 226 && portal.g == 45 && portal.b == 209) {
        map->check_path_map = MAP_4_TO_1;
        map->on_map = MAP1;
    }
}

void get_color_map5(sfRenderWindow *wdw, maps_t *map,
StructSprite *struct_sprite, menu_t *menu)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map5,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 158 && portal.g == 132 && portal.b == 209) {
        map->check_path_map = MAP_DRAG_TO_0;
        map->on_map = MAP1;
    }
    if (portal.r == 31 && portal.g == 18 && portal.b == 63) {
            if (map->dezoom <= 1.9) {
                map->dezoom += 0.0001;
                sfView_rotate(map->view_combat, map->dezoom);
                sfView_zoom(map->view_combat, map->dezoom);
                sfRenderWindow_setView(wdw, map->view_combat);
            }
            if (map->dezoom > 1.9) {
                map->check_path_map = MAP_5_TO_COMBAT;
                menu->check_first_menu = 7;
            }
    }
}
