/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** draw sprite maps
*/

#include "all_struct.h"


static void draw_sprites_map1(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP1) {
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.bush_lt, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.bush_ld, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.bush_rt, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.bush_rd, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.well_map1, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.roof_1_map1, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.roof_2_map1, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.roof_3_map1, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.big_house_map1, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.tent_map1, NULL);
    }
}

static void draw_sprites_map2(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP2) {
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.tent_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.tree_top_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.tree_bot_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.green_house_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.red_house_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.honey_house_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.medical_house_map2, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.asian_house_map2, NULL);
    }
}

static void draw_sprites_map3(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP3) {
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.big_house_brick_map3, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.big_house_white_map3, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.long_tree_map3, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.red_house_map3, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.house_owl_map3, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.tree_map3, NULL);
    }
}

static void draw_sprites_map4(RPG_t *rpg)
{
    if (rpg->map.on_map == MAP4) {
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.blue_house_map4, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.well_mp4, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.easter_mp4, NULL);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->dimension.tent_mp4, NULL);
    }
}

void draw_all_sprites_maps(RPG_t *rpg)
{
    draw_sprites_map1(rpg);
    draw_sprites_map2(rpg);
    draw_sprites_map3(rpg);
    draw_sprites_map4(rpg);
}
