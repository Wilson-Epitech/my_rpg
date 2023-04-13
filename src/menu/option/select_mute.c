/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** select_mute
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void while_select(menu_t *menu)
{
    while (sfMouse_isButtonPressed(0)) {
        menu->check_mute = 1;
    }
}

void while_deselect(menu_t *menu)
{
    while (sfMouse_isButtonPressed(0)) {
        menu->check_mute = 0;
    }
}

void select_mute(menu_t *menu)
{
    sfVector2f scale_big = {0.5, 0.5};
    if (is_on_button(menu, menu->mute_spr)) {
        sfSprite_setScale(menu->mute_spr, scale_big);
        if (sfMouse_isButtonPressed(0) && menu->check_mute == 0) {
            while_select(menu);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        menu->check_mute = 1;
        while (sfKeyboard_isKeyPressed(sfKeySpace)) {
        }
    }
}

void deselect_mute(menu_t *menu)
{
    sfVector2f scale_big = {0.5, 0.5};
    if (is_on_button(menu, menu->mute_spr)) {
        sfSprite_setScale(menu->mute_spr, scale_big);
        if (sfMouse_isButtonPressed(0) && menu->check_mute == 1) {
            while_deselect(menu);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        menu->check_mute = 0;
        while (sfKeyboard_isKeyPressed(sfKeySpace)) {
        }
    }
}
