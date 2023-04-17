/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** collision
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "maps.h"

static int col_map1_map2(maps_t *map, StructSprite *struct_sprite,
int check_black)
{
    if (map->on_map == MAP1) {
        if (check_black == 1)
            check_black = check_color_col(struct_sprite, map->map1);
        if (check_black == 0)
            check_black = uncollision_char(struct_sprite, map->map1);
        return check_black;
    }
    if (map->on_map == MAP2) {
        if (check_black == 1)
            check_black = check_color_col(struct_sprite, map->map2);
        if (check_black == 0)
            check_black = uncollision_char(struct_sprite, map->map2);
        return check_black;
    }
    return check_black;
}

static int col_map3_map4(maps_t *map, StructSprite *struct_sprite,
int check_black)
{
    if (map->on_map == MAP3) {
        if (check_black == 1)
            check_black = check_color_col(struct_sprite, map->map3);
        if (check_black == 0)
            check_black = uncollision_char(struct_sprite, map->map3);
        return check_black;
    }
    if (map->on_map == MAP4) {
        if (check_black == 1)
            check_black = check_color_col(struct_sprite, map->map4);
        if (check_black == 0)
            check_black = uncollision_char(struct_sprite, map->map4);
        return check_black;
    }
    return check_black;
}

static int col_map5(maps_t *map, StructSprite *struct_sprite,
int check_black)
{
    if (map->on_map == MAP5) {
        if (check_black == 1)
            check_black = check_color_col(struct_sprite, map->map5);
        if (check_black == 0)
            check_black = uncollision_char(struct_sprite, map->map5);
        return check_black;
    }
    return check_black;
}

int col_which_map(maps_t *map, StructSprite *struct_sprite, int check_black)
{
    check_black = col_map1_map2(map, struct_sprite, check_black);
    check_black = col_map3_map4(map, struct_sprite, check_black);
    check_black = col_map5(map, struct_sprite, check_black);
    return check_black;
}
