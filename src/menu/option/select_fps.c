/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** select_fps
*/

#include "all_struct.h"

void select_min_fps(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 700 && rpg->menu.mouse_menu.x < 980
    && rpg->menu.mouse_menu .y > 600 && rpg->menu.mouse_menu.y < 725) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_fps = 1;
        }
        sfText_setColor(rpg->menu.min_fps, sfRed);
    } else {
        sfText_setColor(rpg->menu.min_fps, sfBlack);
    }
}

void select_mid_fps(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 1000 && rpg->menu.mouse_menu.x < 1180
    && rpg->menu.mouse_menu .y > 600 && rpg->menu.mouse_menu.y < 725) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_fps = 2;
        }
        sfText_setColor(rpg->menu.mid_fps, sfRed);
    } else {
        sfText_setColor(rpg->menu.mid_fps, sfBlack);
    }
}

void select_high_fps(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 1300 && rpg->menu.mouse_menu.x < 1480
    && rpg->menu.mouse_menu .y > 600 && rpg->menu.mouse_menu.y < 725) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_fps = 3;
        }
        sfText_setColor(rpg->menu.high_fps, sfRed);
    } else {
        sfText_setColor(rpg->menu.high_fps, sfBlack);
    }
}

void check_90fps(sfRenderWindow *wdw, RPG_t *rpg)
{
    if (rpg->menu.check_fps == 3) {
        sfRectangleShape_setFillColor(rpg->menu.button_high_fps,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setFramerateLimit(wdw, 90);
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_high_fps,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}

void check_choosen_fps(RPG_t *rpg, sfRenderWindow *wdw)
{
    if (rpg->menu.check_fps == 1) {
        sfRectangleShape_setFillColor(rpg->menu.button_min_fps,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setFramerateLimit(wdw, 30);
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_min_fps,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
    if (rpg->menu.check_fps == 2) {
        sfRectangleShape_setFillColor(rpg->menu.button_middle_fps,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setFramerateLimit(wdw, 60);
    } else {
        sfRectangleShape_setFillColor(rpg->menu.button_middle_fps,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
    check_90fps(wdw, rpg);
}
