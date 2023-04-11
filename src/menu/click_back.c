/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_back
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void click_back(menu_t *menu)
{
    if (menu->mouse_menu.x > 60 && menu->mouse_menu.x < 250
    && menu->mouse_menu.y > 50 && menu->mouse_menu.y < 100) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 1;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        menu->check_first_menu = 1;
        while (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        }
    }
}

void click_back_option(menu_t *menu)
{
    if (menu->mouse_menu.x > 60 && menu->mouse_menu.x < 250
    && menu->mouse_menu.y > 50 && menu->mouse_menu.y < 100) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 2;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        menu->check_first_menu = 2;
        while (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        }
    }
}
