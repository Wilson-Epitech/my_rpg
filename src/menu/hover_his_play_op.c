/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** hover_his_play_op
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void hover_history(menu_t *menu)
{
    if (menu->mouse_menu.x > 200 && menu->mouse_menu.x < 570
    && menu->mouse_menu.y > 250 && menu->mouse_menu.y < 350) {
        sfText_setColor(menu->history, sfRed);
    } else {
        sfText_setColor(menu->history, sfBlack);
    }
}

void hover_play(menu_t *menu)
{
    if (menu->mouse_menu.x > 825 && menu->mouse_menu.x < 1170
    && menu->mouse_menu.y > 250 && menu->mouse_menu.y < 350) {
        sfText_setColor(menu->play, sfRed);
    } else {
        sfText_setColor(menu->play, sfBlack);
    }
}

void hover_option(menu_t *menu)
{
    if (menu->mouse_menu.x > 1400 && menu->mouse_menu.x < 1770
    && menu->mouse_menu.y > 250 && menu->mouse_menu.y < 350) {
        sfText_setColor(menu->option, sfRed);
    } else {
        sfText_setColor(menu->option, sfBlack);
    }
}

void hover_credit(menu_t *menu)
{
    if (menu->mouse_menu.x > 825 && menu->mouse_menu.x < 1170
    && menu->mouse_menu.y > 750 && menu->mouse_menu.y < 850) {
        sfText_setColor(menu->credit, sfRed);
    } else {
        sfText_setColor(menu->credit, sfBlack);
    }
}

void hover_back(menu_t *menu)
{
    if (menu->mouse_menu.x > 60 && menu->mouse_menu.x < 250
    && menu->mouse_menu.y > 50 && menu->mouse_menu.y < 100) {
        sfText_setColor(menu->back, sfRed);
    } else {
        sfText_setColor(menu->back, sfBlack);
    }
}
