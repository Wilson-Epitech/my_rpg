/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_maps
*/

#include "all_struct.h"

void destroy_maps(RPG_t *rpg)
{
    sfSprite_destroy(rpg->map.map1_spr);
    sfTexture_destroy(rpg->map.map1_txr);
    sfImage_destroy(rpg->map.map1);
    sfSprite_destroy(rpg->map.map2_spr);
    sfTexture_destroy(rpg->map.map2_txr);
    sfImage_destroy(rpg->map.map2);
    sfSprite_destroy(rpg->map.map3_spr);
    sfTexture_destroy(rpg->map.map3_txr);
    sfImage_destroy(rpg->map.map3);
    sfSprite_destroy(rpg->map.map4_spr);
    sfTexture_destroy(rpg->map.map4_txr);
    sfImage_destroy(rpg->map.map4);
    sfSprite_destroy(rpg->map.map5_spr);
    sfTexture_destroy(rpg->map.map5_txr);
    sfImage_destroy(rpg->map.map5);
    sfView_destroy(rpg->map.view_combat);
}
