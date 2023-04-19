/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** get_color_maps
*/

#include "all_struct.h"

void get_color_map2(RPG_t *rpg)
{
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

void get_color_map3(RPG_t *rpg)
{
    sfColor portal;
    portal = sfImage_getPixel(rpg->map.map3,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 182 && portal.g == 252 && portal.b == 174) {
        rpg->map.check_path_map = MAP_3_TO_2;
        rpg->map.on_map = MAP2;
    }
    if (portal.r == 196 && portal.g == 165 && portal.b == 38) {
        rpg->map.check_path_map = MAP_3_TO_4;
        rpg->map.on_map = MAP4;
    }
    if (portal.r == 22 && portal.g == 165 && portal.b == 165) {
        rpg->quest.npc = SHAOLIN;
    } else {
        rpg->quest.npc = NO_NPC;
    }
}

void get_color_map4(RPG_t *rpg)
{
    sfColor portal;
    portal = sfImage_getPixel(rpg->map.map4,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 96 && portal.g == 9 && portal.b == 96) {
        rpg->map.check_path_map = MAP_4_TO_3;
        rpg->map.on_map = MAP3;
    }
    if (portal.r == 226 && portal.g == 45 && portal.b == 209) {
        rpg->map.check_path_map = MAP_4_TO_1;
        rpg->map.on_map = MAP1;
    }
}

void get_color_map5(sfRenderWindow *wdw, RPG_t *rpg)
{
    sfColor portal;
    portal = sfImage_getPixel(rpg->map.map5,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 158 && portal.g == 132 && portal.b == 209) {
        rpg->map.check_path_map = MAP_DRAG_TO_0;
        rpg->map.on_map = MAP1;
    }
    if (portal.r == 31 && portal.g == 18 && portal.b == 63) {
            if (rpg->map.dezoom <= 1.9) {
                rpg->map.dezoom += 0.0001;
                sfView_rotate(rpg->map.view_combat, rpg->map.dezoom);
                sfView_zoom(rpg->map.view_combat, rpg->map.dezoom);
                sfRenderWindow_setView(wdw, rpg->map.view_combat);
            }
            if (rpg->map.dezoom > 1.9) {
                rpg->map.check_path_map = MAP_5_TO_COMBAT;
                rpg->menu.check_first_menu = 7;
            }
    }
}
