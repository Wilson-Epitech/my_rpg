/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_option_effect
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_bar_effect(menu_t *menu)
{
    menu->effect_bar = sfRectangleShape_create();
    menu->size_effect_bar.x = 800;
    menu->size_effect_bar.y = 10;
    menu->pos_effect_bar.x = 700;
    menu->pos_effect_bar.y = 300;

    sfRectangleShape_setSize(menu->effect_bar, menu->size_effect_bar);
    sfRectangleShape_setPosition(menu->effect_bar, menu->pos_effect_bar);
    sfRectangleShape_setFillColor(menu->effect_bar, sfYellow);
}

void create_slider_effect(menu_t *menu)
{
    menu->slider_effect = sfRectangleShape_create();
    menu->size_slider_effect.x = 10;
    menu->size_slider_effect.y = 50;
    menu->pos_slider_effect.x = 1500;
    menu->pos_slider_effect.y = 280;

    sfRectangleShape_setSize(menu->slider_effect, menu->size_slider_effect);
    sfRectangleShape_setPosition(menu->slider_effect, menu->pos_slider_effect);
    sfRectangleShape_setFillColor(menu->slider_effect, sfBlack);
}

void create_effect_txt(menu_t *menu)
{
    sfVector2f pos = {450, 250};

    menu->effect = sfText_create();
    sfText_setFont(menu->effect, menu->game_name_font);
    sfText_setString(menu->effect, "Effect\nVolume");
    sfText_setCharacterSize(menu->effect, 40);
    sfText_setPosition(menu->effect, pos);
    sfText_setColor(menu->effect, sfBlack);
}
