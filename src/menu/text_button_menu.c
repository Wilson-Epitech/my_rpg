/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** text_button_menu
*/

#include "all_struct.h"

void button_history_text(RPG_t *rpg)
{
    sfVector2f pos = {275, 265};

    rpg->menu.history = sfText_create();
    sfText_setFont(rpg->menu.history, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.history, "History");
    sfText_setCharacterSize(rpg->menu.history, 45);
    sfText_setPosition(rpg->menu.history, pos);
    sfText_setColor(rpg->menu.history, sfBlack);
}

void button_play_text(RPG_t *rpg)
{
    sfVector2f pos = {845, 265};

    rpg->menu.play = sfText_create();
    sfText_setFont(rpg->menu.play, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.play, "New Game");
    sfText_setCharacterSize(rpg->menu.play, 40);
    sfText_setPosition(rpg->menu.play, pos);
    sfText_setColor(rpg->menu.play, sfBlack);
}

void button_option_text(RPG_t *rpg)
{
    sfVector2f pos = {1480, 265};

    rpg->menu.option = sfText_create();
    sfText_setFont(rpg->menu.option, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.option, "Option");
    sfText_setCharacterSize(rpg->menu.option, 45);
    sfText_setPosition(rpg->menu.option, pos);
    sfText_setColor(rpg->menu.option, sfBlack);
}

void button_credit_text(RPG_t *rpg)
{
    sfVector2f pos = {885, 765};

    rpg->menu.credit = sfText_create();
    sfText_setFont(rpg->menu.credit, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.credit, "Credit");
    sfText_setCharacterSize(rpg->menu.credit, 45);
    sfText_setPosition(rpg->menu.credit, pos);
    sfText_setColor(rpg->menu.credit, sfBlack);
}

void button_back_text(RPG_t *rpg)
{
    sfVector2f pos = {95, 55};

    rpg->menu.back = sfText_create();
    sfText_setFont(rpg->menu.back, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.back, "Back");
    sfText_setCharacterSize(rpg->menu.back, 35);
    sfText_setPosition(rpg->menu.back, pos);
    sfText_setColor(rpg->menu.back, sfBlack);
}
