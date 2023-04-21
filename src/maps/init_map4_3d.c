/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_map4_3d
*/

#include "all_struct.h"

static void blue_house_well(RPG_t *rpg)
{
    sfVector2f owl = {1475, 15};
    sfVector2f well = {645, 10};

    rpg->dimension.blue_house_map4 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.blue_house_map4,
    rpg->dimension.house_owl, sfTrue);
    sfSprite_setPosition(rpg->dimension.blue_house_map4, owl);
    rpg->dimension.well_mp4 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.well_mp4, rpg->dimension.well, sfTrue);
    sfSprite_setPosition(rpg->dimension.well_mp4, well);
}

static void easter_tent(RPG_t *rpg)
{
    sfVector2f easter = {950, 200};
    sfVector2f tent = {118, 165};

    rpg->dimension.easter
    = sfTexture_createFromFile("textures/maps/rock.png", NULL);
    rpg->dimension.easter_mp4 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.easter_mp4,
    rpg->dimension.easter, sfTrue);
    sfSprite_setPosition(rpg->dimension.easter_mp4, easter);
    rpg->dimension.tent_mp4 = sfSprite_create();
    sfSprite_setTexture(rpg->dimension.tent_mp4, rpg->dimension.tent, sfTrue);
    sfSprite_setPosition(rpg->dimension.tent_mp4, tent);
}

void init_map4_3d(RPG_t *rpg)
{
    blue_house_well(rpg);
    easter_tent(rpg);
}
