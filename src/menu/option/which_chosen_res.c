/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** which_chosen_res
*/

#include "all_struct.h"

void choosen_small(RPG_t *rpg)
{
    sfVector2u full = {1920, 1080};

    if (rpg->menu.check_res == 1) {
        sfRectangleShape_setFillColor(rpg->menu.button_full_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setSize(rpg->window.wdw, full);
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_full_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}

void choosen_med(RPG_t *rpg)
{
    sfVector2u middle = {1366, 768};

    if (rpg->menu.check_res == 2) {
        sfRectangleShape_setFillColor(rpg->menu.button_1300_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setSize(rpg->window.wdw, middle);
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_1300_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}

void choosen_high(RPG_t *rpg)
{
    sfVector2u small = {360, 640};

    if (rpg->menu.check_res == 3) {
        sfRectangleShape_setFillColor(rpg->menu.button_300_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setSize(rpg->window.wdw, small);
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_300_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}
