/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** select_fps
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void select_min_fps(menu_t *menu)
{
    if (menu->mouse_menu.x > 700 && menu->mouse_menu.x < 980
    && menu->mouse_menu .y > 600 && menu->mouse_menu.y < 725) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_fps = 1;
        }
        sfText_setColor(menu->min_fps, sfRed);
    } else {
        sfText_setColor(menu->min_fps, sfBlack);
    }
}

void select_mid_fps(menu_t *menu)
{
    if (menu->mouse_menu.x > 1000 && menu->mouse_menu.x < 1180
    && menu->mouse_menu .y > 600 && menu->mouse_menu.y < 725) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_fps = 2;
        }
        sfText_setColor(menu->mid_fps, sfRed);
    } else {
        sfText_setColor(menu->mid_fps, sfBlack);
    }
}

void select_high_fps(menu_t *menu)
{
    if (menu->mouse_menu.x > 1300 && menu->mouse_menu.x < 1480
    && menu->mouse_menu .y > 600 && menu->mouse_menu.y < 725) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_fps = 3;
        }
        sfText_setColor(menu->high_fps, sfRed);
    } else {
        sfText_setColor(menu->high_fps, sfBlack);
    }
}

void check_90fps(sfRenderWindow *wdw, menu_t *menu)
{
    if (menu->check_fps == 3) {
        sfRectangleShape_setFillColor(menu->button_high_fps,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setFramerateLimit(wdw, 90);
    } else {
        sfRectangleShape_setFillColor(menu->button_high_fps,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
}

void check_choosen_fps(menu_t *menu, sfRenderWindow *wdw)
{
    if (menu->check_fps == 1) {
        sfRectangleShape_setFillColor(menu->button_min_fps,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setFramerateLimit(wdw, 30);
    } else {
        sfRectangleShape_setFillColor(menu->button_min_fps,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
    if (menu->check_fps == 2) {
        sfRectangleShape_setFillColor(menu->button_middle_fps,
        sfColor_fromRGBA(0, 0, 0, 50));
        sfRenderWindow_setFramerateLimit(wdw, 60);
    } else {
        sfRectangleShape_setFillColor(menu->button_middle_fps,
        sfColor_fromRGBA(0, 0, 0, 0));
    }
    check_90fps(wdw, menu);
}
