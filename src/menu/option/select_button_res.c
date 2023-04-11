/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** select_button_res
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void select_button_full(menu_t *menu)
{
    if (menu->mouse_menu.x > 700 && menu->mouse_menu.x < 980
    && menu->mouse_menu .y > 400 && menu->mouse_menu.y < 525) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_res = 1;
        }
        sfText_setColor(menu->fullscreen, sfRed);
    } else {
        sfText_setColor(menu->fullscreen, sfBlack);
    }
}

void select_button_middle(menu_t *menu)
{
    if (menu->mouse_menu.x > 1000 && menu->mouse_menu.x < 1180
    && menu->mouse_menu .y > 400 && menu->mouse_menu.y < 525) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_res = 2;
        }
        sfText_setColor(menu->middle_screen, sfRed);
    } else {
        sfText_setColor(menu->middle_screen, sfBlack);
    }
}

void select_button_small(menu_t *menu)
{
    if (menu->mouse_menu.x > 1300 && menu->mouse_menu.x < 1480
    && menu->mouse_menu .y > 400 && menu->mouse_menu.y < 525) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_res = 3;
        }
        sfText_setColor(menu->small_screen, sfRed);
    } else {
        sfText_setColor(menu->small_screen, sfBlack);
    }
}

void check_choosen_res(menu_t *menu, sfRenderWindow *wdw)
{
    choosen_small(wdw, menu);
    choosen_med(wdw, menu);
    choosen_high(wdw, menu);
}
