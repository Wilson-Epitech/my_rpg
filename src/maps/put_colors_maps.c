/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** get_color_maps
*/

#include "all_struct.h"

void put_color_map5(RPG_t *rpg)
{
    sfColor portal;
    portal = sfImage_getPixel(rpg->map.map5,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 158 && portal.g == 132 && portal.b == 209) {
        rpg->map.check_path_map = MAP_DRAG_TO_0;
        rpg->map.on_map = MAP1;
    }
    if (portal.r == 31 && portal.g == 18 && portal.b == 63) {
        rpg->map.spin = 1;
        if (rpg->map.dezoom < 1.05) {
            rpg->map.dezoom += 0.0001;
            sfView_rotate(rpg->map.view_combat, rpg->map.dezoom);
            sfView_zoom(rpg->map.view_combat, rpg->map.dezoom);
            sfRenderWindow_setView(rpg->window.wdw, rpg->map.view_combat);
        }
        if (rpg->map.dezoom > 1.04) {
            rpg->map.check_path_map = MAP_5_TO_COMBAT;
            rpg->menu.check_first_menu = 7;
        }
    }
}

void put_color_map3(RPG_t *rpg)
{
    sfColor portal;
    portal = sfImage_getPixel(rpg->map.map3,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 185 && portal.g == 216 && portal.b == 163) {
        rpg->map.check_path_map = MAP_3_TO_2;
        rpg->map.on_map = MAP2;
    }
    if (portal.r == 197 && portal.g == 165 && portal.b == 35) {
        rpg->map.check_path_map = MAP_3_TO_4;
        rpg->map.on_map = MAP4;
    }
    if (portal.r == 27 && portal.g == 166 && portal.b == 165) {
        rpg->quest.npc = SHAOLIN;
    } else {
        rpg->quest.npc = NO_NPC;
    }
}
