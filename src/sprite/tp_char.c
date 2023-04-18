/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** tp_char
*/

#include "sprite.h"
#include "maps.h"

void tp_map1(StructSprite *struct_sprite, maps_t *map)
{
    sfVector2f from_map2 = {1850 , 0};
    sfVector2f from_map4 = {400, 800};
    sfVector2f from_map5 = {-270 , -900};

    if (map->check_path_map == MAP_2_TO_1UPPER) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map2);
    }
    if (map->check_path_map == MAP_2_TO_1LOWER) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map2);
    }
    if (map->check_path_map == MAP_4_TO_1) {
        sfSprite_move(struct_sprite->sprite, from_map4);
        map->check_path_map = NO_PATH_TAKEN;
    }
    if (map->check_path_map == MAP_DRAG_TO_0) {
        sfSprite_move(struct_sprite->sprite, from_map5);
        map->check_path_map = NO_PATH_TAKEN;
    }
}

void tp_map2(StructSprite *struct_sprite, maps_t *map)
{
    sfVector2f from_map1 = {-1850 , 0};
    sfVector2f from_map3 = {250 , 950};

    if (map->check_path_map == MAP_1_TO_UPPER2) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map1);
    }
    if (map->check_path_map == MAP_1_TO_LOWER2) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map1);
    }
    if (map->check_path_map == MAP_3_TO_2) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map3);
    }
}

void tp_map3(StructSprite *struct_sprite, maps_t *map)
{
    sfVector2f from_map2 = {-250 , -950};
    sfVector2f from_map4 = {-1800 , 500};

    if (map->check_path_map == MAP_2_TO_3) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map2);
    }
    if (map->check_path_map == MAP_4_TO_3) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map4);
    }
}

void tp_map4(StructSprite *struct_sprite, maps_t *map)
{
    sfVector2f from_map3 = {1800, -500};
    sfVector2f from_map1 = {-400 , -900};

    if (map->check_path_map == MAP_3_TO_4) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map3);
    }
    if (map->check_path_map == MAP_1_TO_4) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map1);
    }
}

void tp_map5(StructSprite *struct_sprite, maps_t *map)
{
    sfVector2f from_map1 = {270, 900};

    if (map->check_path_map == MAP_1_TO_DRAG) {
        map->check_path_map = NO_PATH_TAKEN;
        sfSprite_move(struct_sprite->sprite, from_map1);
    }
}
