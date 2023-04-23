/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** which_chosen_res
*/

#include "all_struct.h"

void choosen_high(RPG_t *rpg)
{
    static int set_full = 0;
    sfVector2u full = {1920, 1080};

    if (rpg->menu.check_res == 1) {
        sfRectangleShape_setFillColor(rpg->menu.button_full_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        if (set_full == 0) {
            sfRenderWindow_close(rpg->window.wdw);
            sfRenderWindow_destroy(rpg->window.wdw);
            rpg->window.wdw = sfRenderWindow_create(rpg->window.mode,
            "Dragon's Burden", sfResize | sfClose, NULL);
            sfRenderWindow_setSize(rpg->window.wdw, full);
            sfRenderWindow_setFramerateLimit(rpg->window.wdw, 90);
            set_full += 1;
        }
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_full_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
        set_full = 0;
    }
}

void choosen_med(RPG_t *rpg)
{
    static int set_middle = 0;
    sfVector2u middle = {1366, 768};

    if (rpg->menu.check_res == 2) {
        sfRenderWindow_setSize(rpg->window.wdw, middle);
        sfRectangleShape_setFillColor(rpg->menu.button_1300_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        if (set_middle == 0) {
            sfRenderWindow_close(rpg->window.wdw);
            sfRenderWindow_destroy(rpg->window.wdw);
            rpg->window.wdw = sfRenderWindow_create(rpg->window.mode,
            "Dragon's Burden", sfResize | sfClose, NULL);
            sfRenderWindow_setFramerateLimit(rpg->window.wdw, 90);
            set_middle += 1;
        }
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_1300_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
        set_middle = 0;
    }
}

void choosen_fullscreen(RPG_t *rpg)
{
    static int set_fullscreen = 0;

    if (rpg->menu.check_res == 3) {
        sfRectangleShape_setFillColor(rpg->menu.button_300_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        if (set_fullscreen == 0) {
            sfRenderWindow_close(rpg->window.wdw);
            sfRenderWindow_destroy(rpg->window.wdw);
            rpg->window.wdw = sfRenderWindow_create(rpg->window.mode,
            "Dragon's Burden", sfFullscreen, NULL);
            sfRenderWindow_setFramerateLimit(rpg->window.wdw, 90);
            set_fullscreen += 1;
        }
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_300_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
        set_fullscreen = 0;
    }
}
