/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_option_effect
*/

#include "all_struct.h"

void create_bar_effect(RPG_t *rpg)
{
    rpg->menu.effect_bar = sfRectangleShape_create();
    rpg->menu.size_effect_bar.x = 800;
    rpg->menu.size_effect_bar.y = 10;
    rpg->menu.pos_effect_bar.x = 700;
    rpg->menu.pos_effect_bar.y = 300;

    sfRectangleShape_setSize(rpg->menu.effect_bar, rpg->menu.size_effect_bar);
    sfRectangleShape_setPosition(rpg->menu.effect_bar,
    rpg->menu.pos_effect_bar);
    sfRectangleShape_setFillColor(rpg->menu.effect_bar, sfYellow);
}

void create_slider_effect(RPG_t *rpg)
{
    rpg->menu.slider_effect = sfRectangleShape_create();
    rpg->menu.size_slider_effect.x = 10;
    rpg->menu.size_slider_effect.y = 50;
    rpg->menu.pos_slider_effect.x = 1500;
    rpg->menu.pos_slider_effect.y = 280;

    sfRectangleShape_setSize(rpg->menu.slider_effect,
    rpg->menu.size_slider_effect);
    sfRectangleShape_setPosition(rpg->menu.slider_effect,
    rpg->menu.pos_slider_effect);
    sfRectangleShape_setFillColor(rpg->menu.slider_effect, sfBlack);
}

void create_effect_txt(RPG_t *rpg)
{
    sfVector2f pos = {450, 250};

    rpg->menu.effect = sfText_create();
    sfText_setFont(rpg->menu.effect, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.effect, "Effect\nVolume");
    sfText_setCharacterSize(rpg->menu.effect, 40);
    sfText_setPosition(rpg->menu.effect, pos);
    sfText_setColor(rpg->menu.effect, sfBlack);
}
