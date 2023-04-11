/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** which_chosen_res
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void choosen_small(sfRenderWindow *wdw, menu_t *menu)
{
    sfVector2u full = {1920, 1080};

    if (menu->check_res == 1) {
        sfRectangleShape_setFillColor(menu->button_full_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setSize(wdw, full);
    } else {
        sfRectangleShape_setFillColor(menu->button_full_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}

void choosen_med(sfRenderWindow *wdw, menu_t *menu)
{
    sfVector2u middle = {1366, 768};

    if (menu->check_res == 2) {
        sfRectangleShape_setFillColor(menu->button_1300_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setSize(wdw, middle);
    } else {
        sfRectangleShape_setFillColor(menu->button_1300_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}

void choosen_high(sfRenderWindow *wdw, menu_t *menu)
{
    sfVector2u small = {360, 640};

    if (menu->check_res == 3) {
        sfRectangleShape_setFillColor(menu->button_300_rect,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setSize(wdw, small);
    } else {
        sfRectangleShape_setFillColor(menu->button_300_rect,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}
