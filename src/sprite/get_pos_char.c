/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** get_pos_char
*/

#include "sprite.h"
#include "maps.h"

void get_pos_char(StructSprite *struct_sprite)
{
    struct_sprite->sprite_pos = sfSprite_getPosition(struct_sprite->sprite);
}

void tp_all_maps(maps_t *map, StructSprite *struct_sprite)
{
    tp_map1(struct_sprite, map);
    tp_map2(struct_sprite, map);
    tp_map3(struct_sprite, map);
    tp_map4(struct_sprite, map);
    tp_map5(struct_sprite, map);
}
