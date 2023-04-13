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
    if (is_on_button(menu, menu->button_history_spr)) {
        sfText_setColor(menu->history, sfRed);
    } else {
        sfText_setColor(menu->history, sfBlack);
    }
}

void hover_play(menu_t *menu)
{
    if (is_on_button(menu, menu->button_play_spr)) {
        sfText_setColor(menu->play, sfRed);
    } else {
        sfText_setColor(menu->play, sfBlack);
    }
}

void hover_option(menu_t *menu)
{
    if (is_on_button(menu, menu->button_option_spr)) {
        sfText_setColor(menu->option, sfRed);
    } else {
        sfText_setColor(menu->option, sfBlack);
    }
}

void hover_credit(menu_t *menu)
{
    if (is_on_button(menu, menu->button_credit_spr)) {
        sfText_setColor(menu->credit, sfRed);
    } else {
        sfText_setColor(menu->credit, sfBlack);
    }
}

void hover_back(menu_t *menu)
{
    if (is_on_button(menu, menu->button_back_spr)) {
        sfText_setColor(menu->back, sfRed);
    } else {
        sfText_setColor(menu->back, sfBlack);
    }
}
