/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** get_color_maps
*/

#include "all_struct.h"

void get_color_map2(RPG_t *rpg)
{
    if (rpg->struct_sprite.sprite_pos.x > 0
    && rpg->struct_sprite.sprite_pos.x < 1920
    && rpg->struct_sprite.sprite_pos.y > 0
    && rpg->struct_sprite.sprite_pos.y < 1080) {
        sfColor portal;
        portal = sfImage_getPixel(rpg->map.map2,
        rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
        if (portal.r == 85 && portal.g == 69 && portal.b == 149) {
            rpg->map.check_path_map = MAP_2_TO_1UPPER;
            rpg->map.on_map = MAP1;
        }
        if (portal.r == 24 && portal.g == 232 && portal.b == 152) {
            rpg->map.check_path_map = MAP_2_TO_1LOWER;
            rpg->map.on_map = MAP1;
        }
        if (portal.r == 99 && portal.g == 16 && portal.b == 196) {
            rpg->map.check_path_map = MAP_2_TO_3;
            rpg->map.on_map = MAP3;
        }
    }
}

void get_color_map3(RPG_t *rpg)
{
    if (rpg->struct_sprite.sprite_pos.x > 0
    && rpg->struct_sprite.sprite_pos.x < 1920
    && rpg->struct_sprite.sprite_pos.y > 0
    && rpg->struct_sprite.sprite_pos.y < 1080) {
        put_color_map3(rpg);
    }
}

void get_color_map4(RPG_t *rpg)
{
    if (rpg->struct_sprite.sprite_pos.x > 10
    && rpg->struct_sprite.sprite_pos.x < 1920
    && rpg->struct_sprite.sprite_pos.y > 0
    && rpg->struct_sprite.sprite_pos.y < 1080) {
        sfColor portal;
        portal = sfImage_getPixel(rpg->map.map4,
        rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
        if (portal.r == 90 && portal.g == 33 && portal.b == 94) {
            rpg->map.check_path_map = MAP_4_TO_3;
            rpg->map.on_map = MAP3;
        }
        if (portal.r == 170 && portal.g == 77 && portal.b == 152) {
            rpg->map.check_path_map = MAP_4_TO_1;
            rpg->map.on_map = MAP1;
        }
    }
}

void get_color_map5(RPG_t *rpg)
{
    if (rpg->struct_sprite.sprite_pos.x > 0
    && rpg->struct_sprite.sprite_pos.x < 1920
    && rpg->struct_sprite.sprite_pos.y > 0
    && rpg->struct_sprite.sprite_pos.y < 1080) {
        put_color_map5(rpg);
    }
}
