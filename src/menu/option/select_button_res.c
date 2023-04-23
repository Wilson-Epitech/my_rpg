/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** select_button_res
*/

#include "all_struct.h"

void select_button_full(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 700 && rpg->menu.mouse_menu.x < 980
    && rpg->menu.mouse_menu .y > 400 && rpg->menu.mouse_menu.y < 525) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_res = 1;
        }
        sfText_setColor(rpg->menu.fullscreen, sfRed);
    } else {
        sfText_setColor(rpg->menu.fullscreen, sfBlack);
    }
}

void select_button_middle(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 1000 && rpg->menu.mouse_menu.x < 1180
    && rpg->menu.mouse_menu .y > 400 && rpg->menu.mouse_menu.y < 525) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_res = 2;
        }
        sfText_setColor(rpg->menu.middle_screen, sfRed);
    } else {
        sfText_setColor(rpg->menu.middle_screen, sfBlack);
    }
}

void select_button_small(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 1300 && rpg->menu.mouse_menu.x < 1480
    && rpg->menu.mouse_menu .y > 400 && rpg->menu.mouse_menu.y < 525) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_res = 3;
        }
        sfText_setColor(rpg->menu.small_screen, sfRed);
    } else {
        sfText_setColor(rpg->menu.small_screen, sfBlack);
    }
}

void check_choosen_res(RPG_t *rpg)
{
    choosen_high(rpg);
    choosen_med(rpg);
    choosen_fullscreen(rpg);
}
