/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_first_menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void get_mouse_pos_menu(sfRenderWindow *wdw, menu_t *menu)
{
    menu->mouse_menu = sfMouse_getPositionRenderWindow(wdw);
}

void hover_click_to_play(menu_t *menu)
{
    if (menu->mouse_menu.x > 900 && menu->mouse_menu.x < 1450
    && menu->mouse_menu.y > 300 && menu->mouse_menu.y < 350) {
        sfText_setColor(menu->click_to_play, sfRed);
    } else if (menu->check_first_menu == 1) {
        sfText_setColor(menu->click_to_play, sfBlack);
    }
}

void click_first_menu(menu_t *menu)
{
    if (menu->mouse_menu.x > 900 && menu->mouse_menu.x < 1450
    && menu->mouse_menu.y > 300 && menu->mouse_menu.y < 350) {
        if (sfMouse_isButtonPressed(0) && menu->check_first_menu == 1) {
            menu->check_first_menu = 2;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
}
