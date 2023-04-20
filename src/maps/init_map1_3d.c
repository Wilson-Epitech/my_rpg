/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** init_map_3d
*/

#include "all_struct.h"

static void init_bush(RPG_t *rpg)
{
    sfVector2f bush_lt = {737, 715};
    sfVector2f bush_ld = {1057, 715};
    sfVector2f bush_rt = {737, 820};
    sfVector2f bush_rd = {1057, 820};

    rpg->dimension.bush
    = sfTexture_createFromFile("textures/maps/bush_map1.png", NULL);
    rpg->dimension.bush_lt = sfSprite_create();
    rpg->dimension.bush_ld = sfSprite_create();
    rpg->dimension.bush_rt = sfSprite_create();
    rpg->dimension.bush_rd = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.bush_lt, rpg->dimension.bush, sfTrue);
    sfSprite_setTexture(rpg->dimension.bush_ld, rpg->dimension.bush, sfTrue);
    sfSprite_setTexture(rpg->dimension.bush_rt, rpg->dimension.bush, sfTrue);
    sfSprite_setTexture(rpg->dimension.bush_rd, rpg->dimension.bush, sfTrue);
    sfSprite_setPosition(rpg->dimension.bush_lt, bush_lt);
    sfSprite_setPosition(rpg->dimension.bush_ld, bush_ld);
    sfSprite_setPosition(rpg->dimension.bush_rt, bush_rt);
    sfSprite_setPosition(rpg->dimension.bush_rd, bush_rd);
}

static void init_roof_well(RPG_t *rpg)
{
    sfVector2f well = {1542, 375};

    rpg->dimension.well
    = sfTexture_createFromFile("textures/maps/roof_well_map1.png", NULL);
    rpg->dimension.well_map1 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.well_map1, rpg->dimension.well, sfTrue);
    sfSprite_setPosition(rpg->dimension.well_map1, well);
}

static void init_roof_house(RPG_t *rpg)
{
    sfVector2f roof_1 = {615, -3};
    sfVector2f roof_2 = {997, -3};
    sfVector2f roof_3 = {1385, -3};

    rpg->dimension.roof_top_red
    = sfTexture_createFromFile("textures/maps/roof_house_top_map1.png", NULL);
    rpg->dimension.roof_1_map1 = sfSprite_create();
    rpg->dimension.roof_2_map1 = sfSprite_create();
    rpg->dimension.roof_3_map1 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.roof_1_map1,
    rpg->dimension.roof_top_red, sfTrue);
    sfSprite_setTexture(rpg->dimension.roof_2_map1,
    rpg->dimension.roof_top_red, sfTrue);
    sfSprite_setTexture(rpg->dimension.roof_3_map1,
    rpg->dimension.roof_top_red, sfTrue);
    sfSprite_setPosition(rpg->dimension.roof_1_map1, roof_1);
    sfSprite_setPosition(rpg->dimension.roof_2_map1, roof_2);
    sfSprite_setPosition(rpg->dimension.roof_3_map1, roof_3);
}

static void init_main_house_tent(RPG_t *rpg)
{
    sfVector2f big_house = {723, 325};
    sfVector2f tent = {1655, 730};

    rpg->dimension.roof_big_house
    = sfTexture_createFromFile("textures/maps/roof_big_house_map1.png", NULL);
    rpg->dimension.big_house_map1 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.big_house_map1,
    rpg->dimension.roof_big_house, sfTrue);
    sfSprite_setPosition(rpg->dimension.big_house_map1, big_house);
    rpg->dimension.tent
    = sfTexture_createFromFile("textures/maps/tent_map1.png", NULL);
    rpg->dimension.tent_map1 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.tent_map1, rpg->dimension.tent, sfTrue);
    sfSprite_setPosition(rpg->dimension.tent_map1, tent);
}

void init_map1_3d(RPG_t *rpg)
{
    init_bush(rpg);
    init_roof_well(rpg);
    init_roof_house(rpg);
    init_main_house_tent(rpg);
}
