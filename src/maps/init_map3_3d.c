/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_map3_3d
*/

#include "all_struct.h"

static void init_roof_big_house(RPG_t *rpg)
{
    sfVector2f house_white = {510, -5};
    sfVector2f house_brick = {1510, 580};

    rpg->dimension.big_house_white
    = sfTexture_createFromFile("textures/maps/house_top_map3.png", NULL);
    rpg->dimension.big_house_white_map3 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.big_house_white_map3,
    rpg->dimension.big_house_white, sfTrue);
    sfSprite_setPosition(rpg->dimension.big_house_white_map3, house_white);
    rpg->dimension.big_house_brick
    = sfTexture_createFromFile("textures/maps/house_brick.png", NULL);
    rpg->dimension.big_house_brick_map3 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.big_house_brick_map3,
    rpg->dimension.big_house_brick, sfTrue);
    sfSprite_setPosition(rpg->dimension.big_house_brick_map3, house_brick);
}

static void init_long_tree(RPG_t *rpg)
{
    sfVector2f long_tree = {1000, 460};
    sfVector2f red_house = {870, 850};

    rpg->dimension.long_tree
    = sfTexture_createFromFile("textures/maps/long_tree.png", NULL);
    rpg->dimension.long_tree_map3 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.long_tree_map3,
    rpg->dimension.long_tree, sfTrue);
    sfSprite_setPosition(rpg->dimension.long_tree_map3, long_tree);
    rpg->dimension.red_house_map3 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.red_house_map3,
    rpg->dimension.roof_top_red, sfTrue);
    sfSprite_setPosition(rpg->dimension.red_house_map3, red_house);
}

static void init_house_owl(RPG_t *rpg)
{
    sfVector2f house_owl = {5, 290};
    sfVector2f tree = {35, -5};

    rpg->dimension.house_owl
    = sfTexture_createFromFile("textures/maps/house_owl_map3.png", NULL);
    rpg->dimension.house_owl_map3 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.house_owl_map3,
    rpg->dimension.house_owl, sfTrue);
    sfSprite_setPosition(rpg->dimension.house_owl_map3, house_owl);
    rpg->dimension.tree_map3 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.tree_map3, rpg->dimension.tree, sfTrue);
    sfSprite_setPosition(rpg->dimension.tree_map3, tree);
}

void init_map3_3d(RPG_t *rpg)
{
    init_roof_big_house(rpg);
    init_long_tree(rpg);
    init_house_owl(rpg);
}
