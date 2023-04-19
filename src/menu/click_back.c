/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_back
*/

#include "all_struct.h"

void click_back(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_back_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_first_menu = 1;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        rpg->menu.check_first_menu = 1;
        while (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        }
    }
}

void click_back_option(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_back_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_first_menu = 2;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        rpg->menu.check_first_menu = 2;
        while (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        }
    }
}
