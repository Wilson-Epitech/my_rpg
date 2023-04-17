/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** init_maps_and_col
*/

#include "maps.h"

static void init_map_to_three(maps_t *map)
{
    sfVector2f scale = {1, 0.96};

    map->map1 = sfImage_createFromFile("textures/maps/map1_collision.png");
    map->map1_txr = sfTexture_createFromFile("textures/maps/map1.png", NULL);
    map->map1_spr = sfSprite_create();
    sfSprite_setScale(map->map1_spr, scale);
    sfSprite_setTexture(map->map1_spr, map->map1_txr, sfTrue);
    map->map2 = sfImage_createFromFile("textures/maps/map2_collision.png");
    map->map2_txr = sfTexture_createFromFile("textures/maps/map2.png", NULL);
    map->map2_spr = sfSprite_create();
    sfSprite_setScale(map->map2_spr, scale);
    sfSprite_setTexture(map->map2_spr, map->map2_txr, sfTrue);
    map->map3 = sfImage_createFromFile("textures/maps/map3_collision.png");
    map->map3_txr = sfTexture_createFromFile("textures/maps/map3.png", NULL);
    map->map3_spr = sfSprite_create();
    sfSprite_setTexture(map->map3_spr, map->map3_txr, sfTrue);
}

void init_maps(maps_t *map)
{
    init_map_to_three(map);
    map->map4 = sfImage_createFromFile("textures/maps/map4_collision.png");
    map->map4_txr = sfTexture_createFromFile("textures/maps/map4.png", NULL);
    map->map4_spr = sfSprite_create();
    sfSprite_setTexture(map->map4_spr, map->map4_txr, sfTrue);
    map->map5 = sfImage_createFromFile("textures/maps/map5_collision.png");
    map->map5_txr = sfTexture_createFromFile("textures/maps/map5.png", NULL);
    map->map5_spr = sfSprite_create();
    sfSprite_setTexture(map->map5_spr, map->map5_txr, sfTrue);
}
