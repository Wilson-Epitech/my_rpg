/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** get_color_maps
*/

#include "maps.h"
#include "sprite.h"

void get_color_map1(maps_t *map, StructSprite *struct_sprite)
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
    if (portal.r == 102 && portal.g == 178 && portal.b == 46) {
        map->check_path_map = MAP_1_TO_DRAG;
        map->on_map = MAP5;
    }
    if (portal.r == 58 && portal.g == 188 && portal.b == 206) {
        map->check_path_map = MAP_1_TO_4;
        map->on_map = MAP4;
    }
}

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
    if (portal.r == 242 && portal.g == 229 && portal.b == 0) {
        map->check_path_map = MAP_2_TO_3;
        map->on_map = MAP3;
    }
}

void get_color_map3(maps_t *map, StructSprite *struct_sprite)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map3,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 182 && portal.g == 252 && portal.b == 174) {
        map->check_path_map = MAP_3_TO_2;
        map->on_map = MAP2;
    }
    if (portal.r == 42 && portal.g == 75 && portal.b == 154) {
        map->check_path_map = MAP_3_TO_4;
        map->on_map = MAP4;
    }
}

void get_color_map4(maps_t *map, StructSprite *struct_sprite)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map4,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 0 && portal.g == 239 && portal.b == 142) {
        map->check_path_map = MAP_4_TO_3;
        map->on_map = MAP3;
    }
    if (portal.r == 226 && portal.g == 45 && portal.b == 209) {
        map->check_path_map = MAP_4_TO_1;
        map->on_map = MAP1;
    }
}

void get_color_map5(maps_t *map, StructSprite *struct_sprite)
{
    sfColor portal;
    portal = sfImage_getPixel(map->map5,
    struct_sprite->sprite_pos.x, struct_sprite->sprite_pos.y);
    if (portal.r == 158 && portal.g == 132 && portal.b == 209) {
        map->check_path_map = MAP_DRAG_TO_0;
        map->on_map = MAP1;
    }
}
