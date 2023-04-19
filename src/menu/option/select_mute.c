/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** select_mute
*/

#include "all_struct.h"

void while_select(RPG_t *rpg)
{
    while (sfMouse_isButtonPressed(0)) {
        rpg->menu.check_mute = 1;
    }
}

void while_deselect(RPG_t *rpg)
{
    while (sfMouse_isButtonPressed(0)) {
        rpg->menu.check_mute = 0;
    }
}

void select_mute(RPG_t *rpg)
{
    sfVector2f scale_big = {0.5, 0.5};
    if (is_on_button(rpg, rpg->menu.mute_spr)) {
        sfSprite_setScale(rpg->menu.mute_spr, scale_big);
        if (sfMouse_isButtonPressed(0) && rpg->menu.check_mute == 0) {
            while_select(rpg);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        rpg->menu.check_mute = 1;
        while (sfKeyboard_isKeyPressed(sfKeySpace)) {
        }
    }
}

void deselect_mute(RPG_t *rpg)
{
    sfVector2f scale_big = {0.5, 0.5};
    if (is_on_button(rpg, rpg->menu.mute_spr)) {
        sfSprite_setScale(rpg->menu.mute_spr, scale_big);
        if (sfMouse_isButtonPressed(0) && rpg->menu.check_mute == 1) {
            while_deselect(rpg);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        rpg->menu.check_mute = 0;
        while (sfKeyboard_isKeyPressed(sfKeySpace)) {
        }
    }
}
