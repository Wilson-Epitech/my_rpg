/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** init_map2_3d
*/

#include "all_struct.h"

static void top_house_honey_house(RPG_t *rpg)
{
    sfVector2f medical_house = {0, 0};
    sfVector2f honey_house = {1245, 770};

    rpg->dimension.medical_house
    = sfTexture_createFromFile("textures/maps/house_top_map2.png", NULL);
    rpg->dimension.medical_house_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.medical_house_map2,
    rpg->dimension.medical_house, sfTrue);
    sfSprite_setPosition(rpg->dimension.medical_house_map2, medical_house);
    rpg->dimension.honey_house
    = sfTexture_createFromFile("textures/maps/honey_house.png", NULL);
    rpg->dimension.honey_house_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.honey_house_map2,
    rpg->dimension.honey_house, sfTrue);
    sfSprite_setPosition(rpg->dimension.honey_house_map2, honey_house);
}

static void init_green_house_red_house(RPG_t *rpg)
{
    sfVector2f green_house = {715, 585};
    sfVector2f red_house = {888, 35};

    rpg->dimension.green_house
    = sfTexture_createFromFile("textures/maps/green_house_midle.png", NULL);
    rpg->dimension.green_house_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.green_house_map2,
    rpg->dimension.green_house, sfTrue);
    sfSprite_setPosition(rpg->dimension.green_house_map2, green_house);
    rpg->dimension.red_house
    = sfTexture_createFromFile("textures/maps/house_top_right_map2.png", NULL);
    rpg->dimension.red_house_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.red_house_map2,
    rpg->dimension.red_house, sfTrue);
    sfSprite_setPosition(rpg->dimension.red_house_map2, red_house);
}

static void tent_map2(RPG_t *rpg)
{
    sfVector2f tent = {373, 315};
    sfVector2f tree_1 = {1315, 300};
    sfVector2f tree_2 = {1635, 560};

    rpg->dimension.tree
    = sfTexture_createFromFile("textures/maps/tree.png", NULL);
    rpg->dimension.tree_top_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.tree_top_map2, rpg->dimension.tree, sfTrue);
    sfSprite_setPosition(rpg->dimension.tree_top_map2, tree_1);
    rpg->dimension.tree_bot_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.tree_bot_map2,
    rpg->dimension.tree, sfTrue);
    sfSprite_setPosition(rpg->dimension.tree_bot_map2, tree_2);
    rpg->dimension.tent_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.tent_map2,
    rpg->dimension.tent, sfTrue);
    sfSprite_setPosition(rpg->dimension.tent_map2, tent);
}

static void asian_house(RPG_t *rpg)
{
    sfVector2f asian_house = {35, 750};

    rpg->dimension.asian_house
    = sfTexture_createFromFile("textures/maps/asian_house.png", NULL);
    rpg->dimension.asian_house_map2 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.asian_house_map2,
    rpg->dimension.asian_house, sfTrue);
    sfSprite_setPosition(rpg->dimension.asian_house_map2, asian_house);
}

void init_map2_3d(RPG_t *rpg)
{
    tent_map2(rpg);
    init_green_house_red_house(rpg);
    top_house_honey_house(rpg);
    asian_house(rpg);
}
