/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** get_color_map1
*/

#include "all_struct.h"

static void get_color_map_grandma(RPG_t *rpg)
{
    sfColor portal;

    portal = sfImage_getPixel(rpg->map.map1,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 58 && portal.g == 188 && portal.b == 206) {
        rpg->map.check_path_map = MAP_1_TO_4;
        rpg->map.on_map = MAP4;
    }
    if (portal.r == 237 && portal.g == 185 && portal.b == 185) {
        rpg->quest.npc = GRANDMA;
    } else {
        rpg->quest.npc = NO_NPC;
    }
}

void get_color_map1(RPG_t *rpg)
{
    sfColor portal;
    portal = sfImage_getPixel(rpg->map.map1,
    rpg->struct_sprite.sprite_pos.x, rpg->struct_sprite.sprite_pos.y);
    if (portal.r == 228 && portal.g == 35 && portal.b == 32) {
        rpg->map.check_path_map = MAP_1_TO_UPPER2;
        rpg->map.on_map = MAP2;
    }
    if (portal.r == 244 && portal.g == 148 && portal.b == 11) {
        rpg->map.check_path_map = MAP_1_TO_LOWER2;
        rpg->map.on_map = MAP2;
    }
    if (portal.r == 52 && portal.g == 15
    && portal.b == 237 && rpg->quest.main_quest == 2) {
        rpg->map.check_path_map = MAP_1_TO_DRAG;
        rpg->map.on_map = MAP5;
    }
    get_color_map_grandma(rpg);
}
