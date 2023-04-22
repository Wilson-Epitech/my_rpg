/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_first_menu
*/

#include "all_struct.h"

void get_mouse_pos_menu(RPG_t *rpg)
{
    sfVector2i mouse_temp = sfMouse_getPositionRenderWindow(rpg->window.wdw);
    rpg->menu.mouse_menu = sfRenderWindow_mapPixelToCoords(rpg->window.wdw,
    mouse_temp, NULL);

}

void hover_click_to_play(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 900 && rpg->menu.mouse_menu.x < 1450
    && rpg->menu.mouse_menu.y > 300 && rpg->menu.mouse_menu.y < 350) {
        sfText_setColor(rpg->menu.click_to_play, sfRed);
    } else if (rpg->menu.check_first_menu == 1) {
        sfText_setColor(rpg->menu.click_to_play, sfBlack);
    }
}

void click_first_menu(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 900 && rpg->menu.mouse_menu.x < 1450
    && rpg->menu.mouse_menu.y > 300 && rpg->menu.mouse_menu.y < 350) {
        if (sfMouse_isButtonPressed(0) && rpg->menu.check_first_menu == 1) {
            rpg->menu.check_first_menu = 2;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
}
