/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** init_maps_and_col
*/

#include "all_struct.h"

void init_map_3d(RPG_t *rpg)
{
    init_map1_3d(rpg);
    init_map2_3d(rpg);
    init_map3_3d(rpg);
    init_map4_3d(rpg);
}

static void init_map_to_three(RPG_t *rpg)
{
    sfVector2f scale = {1, 0.96};
    rpg->map.map1 = sfImage_createFromFile("textures/maps/map1_collision.png");
    rpg->map.map1_txr =
    sfTexture_createFromFile("textures/maps/map1.png", NULL);
    rpg->map.map1_spr = sfSprite_create();
    sfSprite_setScale(rpg->map.map1_spr, scale);
    sfSprite_setTexture(rpg->map.map1_spr, rpg->map.map1_txr, sfTrue);
    rpg->map.map2 =
    sfImage_createFromFile("textures/maps/map2_collision.png");
    rpg->map.map2_txr
    = sfTexture_createFromFile("textures/maps/map2.png", NULL);
    rpg->map.map2_spr = sfSprite_create();
    sfSprite_setScale(rpg->map.map2_spr, scale);
    sfSprite_setTexture(rpg->map.map2_spr, rpg->map.map2_txr, sfTrue);
    rpg->map.map3
    = sfImage_createFromFile("textures/maps/map3_collision.png");
    rpg->map.map3_txr
    = sfTexture_createFromFile("textures/maps/map3.png", NULL);
    rpg->map.map3_spr = sfSprite_create();
    sfSprite_setTexture(rpg->map.map3_spr, rpg->map.map3_txr, sfTrue);
}

void init_maps(RPG_t *rpg)
{
    rpg->history.clock_history = sfClock_create();
    init_map_to_three(rpg);
    rpg->map.map4
    = sfImage_createFromFile("textures/maps/map4_collision.png");
    rpg->map.map4_txr
    = sfTexture_createFromFile("textures/maps/map4.png", NULL);
    rpg->map.map4_spr = sfSprite_create();
    sfSprite_setTexture(rpg->map.map4_spr, rpg->map.map4_txr, sfTrue);
    rpg->map.map5 = sfImage_createFromFile("textures/maps/map5_collision.png");
    rpg->map.map5_txr
    = sfTexture_createFromFile("textures/maps/map5.png", NULL);
    rpg->map.map5_spr = sfSprite_create();
    sfSprite_setTexture(rpg->map.map5_spr, rpg->map.map5_txr, sfTrue);
    init_map_3d(rpg);
}
