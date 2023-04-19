/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** get_pos_char
*/

#include "all_struct.h"

void get_pos_char(RPG_t *rpg)
{
    rpg->struct_sprite.sprite_pos = sfSprite_getPosition(rpg->struct_sprite.sprite);
}

void tp_all_maps(RPG_t *rpg)
{
    tp_map1(rpg);
    tp_map2(rpg);
    tp_map3(rpg);
    tp_map4(rpg);
    tp_map5(rpg);
}
