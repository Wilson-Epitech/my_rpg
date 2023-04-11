/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** text_button_menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void button_history_text(menu_t *menu)
{
    sfVector2f pos = {275, 265};

    menu->history = sfText_create();
    sfText_setFont(menu->history, menu->game_name_font);
    sfText_setString(menu->history, "History");
    sfText_setCharacterSize(menu->history, 45);
    sfText_setPosition(menu->history, pos);
    sfText_setColor(menu->history, sfBlack);
}

void button_play_text(menu_t *menu)
{
    sfVector2f pos = {925, 265};

    menu->play = sfText_create();
    sfText_setFont(menu->play, menu->game_name_font);
    sfText_setString(menu->play, "Play");
    sfText_setCharacterSize(menu->play, 45);
    sfText_setPosition(menu->play, pos);
    sfText_setColor(menu->play, sfBlack);
}

void button_option_text(menu_t *menu)
{
    sfVector2f pos = {1480, 265};

    menu->option = sfText_create();
    sfText_setFont(menu->option, menu->game_name_font);
    sfText_setString(menu->option, "Option");
    sfText_setCharacterSize(menu->option, 45);
    sfText_setPosition(menu->option, pos);
    sfText_setColor(menu->option, sfBlack);
}

void button_credit_text(menu_t *menu)
{
    sfVector2f pos = {885, 765};

    menu->credit = sfText_create();
    sfText_setFont(menu->credit, menu->game_name_font);
    sfText_setString(menu->credit, "Credit");
    sfText_setCharacterSize(menu->credit, 45);
    sfText_setPosition(menu->credit, pos);
    sfText_setColor(menu->credit, sfBlack);
}

void button_back_text(menu_t *menu)
{
    sfVector2f pos = {95, 55};

    menu->back = sfText_create();
    sfText_setFont(menu->back, menu->game_name_font);
    sfText_setString(menu->back, "Back");
    sfText_setCharacterSize(menu->back, 35);
    sfText_setPosition(menu->back, pos);
    sfText_setColor(menu->back, sfBlack);
}
