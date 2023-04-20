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
} maps_t;

typedef struct dimension_s {
    sfTexture *bush;
    sfTexture *well;
    sfTexture *roof_top_red;
    sfTexture *roof_big_house;
    sfTexture *tent;
    sfTexture *tree;
    sfTexture *green_house;
    sfTexture *red_house;
    sfTexture *medical_house;
    sfTexture *honey_house;
    sfTexture *asian_house;
    sfSprite *bush_lt;
    sfSprite *bush_rt;
    sfSprite *bush_ld;
    sfSprite *bush_rd;
    sfSprite *well_map1;
    sfSprite *roof_1_map1;
    sfSprite *roof_2_map1;
    sfSprite *roof_3_map1;
    sfSprite *big_house_map1;
    sfSprite *tent_map1;
    sfSprite *tent_map2;
    sfSprite *tree_top_map2;
    sfSprite *tree_bot_map2;
    sfSprite *green_house_map2;
    sfSprite *red_house_map2;
    sfSprite *medical_house_map2;
    sfSprite *honey_house_map2;
    sfSprite *asian_house_map2;
} dimension_t;

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
