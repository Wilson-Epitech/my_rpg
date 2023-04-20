/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_maps sprite
*/

#include "all_struct.h"

static void destroy_map3_4_3d(RPG_t *rpg)
{
    sfTexture_destroy(rpg->dimension.big_house_brick);
    sfTexture_destroy(rpg->dimension.big_house_white);
    sfTexture_destroy(rpg->dimension.long_tree);
    sfTexture_destroy(rpg->dimension.house_owl);
    sfTexture_destroy(rpg->dimension.easter);
    sfSprite_destroy(rpg->dimension.big_house_brick_map3);
    sfSprite_destroy(rpg->dimension.big_house_white_map3);
    sfSprite_destroy(rpg->dimension.long_tree_map3);
    sfSprite_destroy(rpg->dimension.red_house_map3);
    sfSprite_destroy(rpg->dimension.house_owl_map3);
    sfSprite_destroy(rpg->dimension.tree_map3);
    sfSprite_destroy(rpg->dimension.blue_house_map4);
    sfSprite_destroy(rpg->dimension.well_mp4);
    sfSprite_destroy(rpg->dimension.easter_mp4);
    sfSprite_destroy(rpg->dimension.tent_mp4);
}

static void destroy_sprites_map1(RPG_t *rpg)
{
    sfSprite_destroy(rpg->dimension.roof_1_map1);
    sfSprite_destroy(rpg->dimension.roof_2_map1);
    sfSprite_destroy(rpg->dimension.roof_3_map1);
    sfSprite_destroy(rpg->dimension.big_house_map1);
    sfSprite_destroy(rpg->dimension.tent_map1);
    sfSprite_destroy(rpg->dimension.well_map1);
}

static void destroy_sprites_map2(RPG_t *rpg)
{
    sfSprite_destroy(rpg->dimension.tree_top_map2);
    sfSprite_destroy(rpg->dimension.tree_bot_map2);
    sfSprite_destroy(rpg->dimension.green_house_map2);
    sfSprite_destroy(rpg->dimension.red_house_map2);
    sfSprite_destroy(rpg->dimension.honey_house_map2);
    sfSprite_destroy(rpg->dimension.medical_house_map2);
    sfSprite_destroy(rpg->dimension.tent_map2);
}

void destroy_sprites_maps(RPG_t *rpg)
{
    sfTexture_destroy(rpg->dimension.bush);
    sfTexture_destroy(rpg->dimension.well);
    sfTexture_destroy(rpg->dimension.roof_top_red);
    sfTexture_destroy(rpg->dimension.roof_big_house);
    sfTexture_destroy(rpg->dimension.tent);
    sfTexture_destroy(rpg->dimension.tree);
    sfTexture_destroy(rpg->dimension.green_house);
    sfTexture_destroy(rpg->dimension.red_house);
    sfTexture_destroy(rpg->dimension.medical_house);
    sfTexture_destroy(rpg->dimension.honey_house);
    sfSprite_destroy(rpg->dimension.bush_lt);
    sfSprite_destroy(rpg->dimension.bush_ld);
    sfSprite_destroy(rpg->dimension.bush_rt);
    sfSprite_destroy(rpg->dimension.bush_rd);
    destroy_sprites_map1(rpg);
    destroy_sprites_map2(rpg);
    destroy_map3_4_3d(rpg);
}
