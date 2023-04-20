/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** maps
*/

#include "sprite.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef MAPS_H_
    #define MAPS_H_

    #include "quest.h"

typedef struct maps_s {
    sfImage *map1;
    sfTexture *map1_txr;
    sfSprite *map1_spr;
    sfImage *map2;
    sfTexture *map2_txr;
    sfSprite *map2_spr;
    sfImage *map3;
    sfTexture *map3_txr;
    sfSprite *map3_spr;
    sfImage *map4;
    sfTexture *map4_txr;
    sfSprite *map4_spr;
    sfImage *map5;
    sfTexture *map5_txr;
    sfSprite *map5_spr;
    sfVector2f mouse_img;
    int check_path_map;
    int on_map;
    sfView *view_combat;
    float dezoom;
    sfTexture *map1_3d_txr;
    sfSprite *map1_3d_spr;
} maps_t;

enum map_checker {
    NO_PATH_TAKEN,
    MAP_1_TO_UPPER2,
    MAP_1_TO_LOWER2,
    MAP_1_TO_4,
    MAP_1_TO_DRAG,
    MAP_2_TO_1UPPER,
    MAP_2_TO_1LOWER,
    MAP_2_TO_3,
    MAP_3_TO_2,
    MAP_3_TO_4,
    MAP_4_TO_3,
    MAP_4_TO_1,
    MAP_DRAG_TO_0,
    MAP_5_TO_COMBAT
};

enum map {
    MAP1,
    MAP2,
    MAP3,
    MAP4,
    MAP5
};

#endif /* !MAPS_H_ */
