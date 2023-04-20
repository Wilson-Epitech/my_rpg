/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** collision
*/

#include "all_struct.h"

static int col_map1_map2(RPG_t *rpg, int check_black)
{
    if (rpg->map.on_map == MAP1) {
        if (check_black == 1)
            check_black = check_color_col(rpg, rpg->map.map1);
        if (check_black == 0)
            check_black = uncollision_char(rpg, rpg->map.map1);
        return check_black;
    }
    if (rpg->map.on_map == MAP2) {
        if (check_black == 1)
            check_black = check_color_col(rpg, rpg->map.map2);
        if (check_black == 0)
            check_black = uncollision_char(rpg, rpg->map.map2);
        return check_black;
    }
    return check_black;
}

static int col_map3_map4(RPG_t *rpg, int check_black)
{
    if (rpg->map.on_map == MAP3) {
        if (check_black == 1)
            check_black = check_color_col(rpg, rpg->map.map3);
        if (check_black == 0)
            check_black = uncollision_char(rpg, rpg->map.map3);
        return check_black;
    }
    if (rpg->map.on_map == MAP4) {
        if (check_black == 1)
            check_black = check_color_col(rpg, rpg->map.map4);
        if (check_black == 0)
            check_black = uncollision_char(rpg, rpg->map.map4);
        return check_black;
    }
    return check_black;
}

static int col_map5(RPG_t *rpg, int check_black)
{
    if (rpg->map.on_map == MAP5) {
        if (check_black == 1)
            check_black = check_color_col(rpg, rpg->map.map5);
        if (check_black == 0)
            check_black = uncollision_char(rpg, rpg->map.map5);
        return check_black;
    }
    return check_black;
}

int col_which_map(RPG_t *rpg, int check_black)
{
    check_black = col_map1_map2(rpg, check_black);
    check_black = col_map3_map4(rpg, check_black);
    check_black = col_map5(rpg, check_black);
    return check_black;
}
