/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** mouvement_maps
*/

#include "all_struct.h"

static void draw_map1(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP1) {
        sfRenderWindow_drawSprite(rpg->window.wdw, rpg->map.map1_spr, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
            rpg->struct_sprite.grandma_spt, NULL);
        talk_to_grandma(rpg);
        get_color_map1(rpg);
        return;
    }
}

static void draw_map2(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP2) {
        sfRenderWindow_drawSprite(rpg->window.wdw, rpg->map.map2_spr, NULL);
        get_color_map2(rpg);
        return;
    }
}

static void draw_map3(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP3) {
        sfRenderWindow_drawSprite(rpg->window.wdw, rpg->map.map3_spr, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
            rpg->struct_sprite.shaolin_spt, NULL);
        talk_to_shaolin(rpg);
        get_color_map3(rpg);
        return;
    }
}

static void draw_map4_map5(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP4) {
        sfRenderWindow_drawSprite(rpg->window.wdw, rpg->map.map4_spr, NULL);
        get_color_map4(rpg);
        return;
    }
    if (rpg->map.on_map == MAP5) {
        sfRenderWindow_drawSprite(rpg->window.wdw, rpg->map.map5_spr, NULL);
        get_color_map5(rpg);
        return;
    }
}

void draw_current_map(RPG_t *rpg)
{
    draw_map1(rpg);
    draw_map2(rpg);
    draw_map3(rpg);
    draw_map4_map5(rpg);
}
