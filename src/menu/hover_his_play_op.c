/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** hover_his_play_op
*/

#include "all_struct.h"

void hover_history(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_history_spr)) {
        sfText_setColor(rpg->menu.history, sfRed);
    } else {
        sfText_setColor(rpg->menu.history, sfBlack);
    }
}

void hover_play(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_play_spr)) {
        sfText_setColor(rpg->menu.play, sfRed);
    } else {
        sfText_setColor(rpg->menu.play, sfBlack);
    }
}

void hover_option(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_option_spr)) {
        sfText_setColor(rpg->menu.option, sfRed);
    } else {
        sfText_setColor(rpg->menu.option, sfBlack);
    }
}

void hover_credit(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_credit_spr)) {
        sfText_setColor(rpg->menu.credit, sfRed);
    } else {
        sfText_setColor(rpg->menu.credit, sfBlack);
    }
}

void hover_back(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_back_spr)) {
        sfText_setColor(rpg->menu.back, sfRed);
    } else {
        sfText_setColor(rpg->menu.back, sfBlack);
    }
}
