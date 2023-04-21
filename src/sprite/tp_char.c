/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** tp_char
*/

#include "all_struct.h"

void tp_map1(RPG_t *rpg)
{
    sfVector2f from_map2 = {1850 , 0};
    sfVector2f from_map4 = {400, 800};
    sfVector2f from_map5 = {-270 , -800};

    if (rpg->map.check_path_map == MAP_2_TO_1UPPER) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map2);
    }
    if (rpg->map.check_path_map == MAP_2_TO_1LOWER) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map2);
    }
    if (rpg->map.check_path_map == MAP_4_TO_1) {
        sfSprite_move(rpg->struct_sprite.sprite, from_map4);
        rpg->map.check_path_map = NO_PATH_TAKEN;
    }
    if (rpg->map.check_path_map == MAP_DRAG_TO_0) {
        sfSprite_move(rpg->struct_sprite.sprite, from_map5);
        rpg->map.check_path_map = NO_PATH_TAKEN;
    }
}

void tp_map2(RPG_t *rpg)
{
    sfVector2f from_map1 = {-1850 , 0};
    sfVector2f from_map3 = {250 , 800};

    if (rpg->map.check_path_map == MAP_1_TO_UPPER2) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map1);
    }
    if (rpg->map.check_path_map == MAP_1_TO_LOWER2) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map1);
    }
    if (rpg->map.check_path_map == MAP_3_TO_2) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map3);
    }
}

void tp_map3(RPG_t *rpg)
{
    sfVector2f from_map2 = {-250 , -750};
    sfVector2f from_map4 = {-1700 , 500};

    if (rpg->map.check_path_map == MAP_2_TO_3) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map2);
    }
    if (rpg->map.check_path_map == MAP_4_TO_3) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map4);
    }
}

void tp_map4(RPG_t *rpg)
{
    sfVector2f from_map3 = {1700, -500};
    sfVector2f from_map1 = {-400 , -750};

    if (rpg->map.check_path_map == MAP_3_TO_4) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map3);
    }
    if (rpg->map.check_path_map == MAP_1_TO_4) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map1);
    }
}

void tp_map5(RPG_t *rpg)
{
    sfVector2f from_map1 = {270, 850};

    if (rpg->map.check_path_map == MAP_1_TO_DRAG) {
        rpg->map.check_path_map = NO_PATH_TAKEN;
        sfSprite_move(rpg->struct_sprite.sprite, from_map1);
    }
}
