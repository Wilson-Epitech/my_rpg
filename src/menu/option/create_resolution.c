/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_resolution
*/

#include "all_struct.h"

void create_fullscreen_button(RPG_t *rpg)
{
    rpg->menu.button_full_rect = sfRectangleShape_create();
    rpg->menu.size_full_button.x = 180;
    rpg->menu.size_full_button.y = 125;
    rpg->menu.pos_full_button.x = 700;
    rpg->menu.pos_full_button.y = 400;

    sfRectangleShape_setSize(rpg->menu.button_full_rect, rpg->menu.size_full_button);
    sfRectangleShape_setPosition(rpg->menu.button_full_rect, rpg->menu.pos_full_button);
    sfRectangleShape_setFillColor(rpg->menu.button_full_rect, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->menu.button_full_rect, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->menu.button_full_rect, 10);
}

void create_1300_button(RPG_t *rpg)
{
    rpg->menu.button_1300_rect = sfRectangleShape_create();
    rpg->menu.size_1300_button.x = 180;
    rpg->menu.size_1300_button.y = 125;
    rpg->menu.pos_1300_button.x = 1000;
    rpg->menu.pos_1300_button.y = 400;

    sfRectangleShape_setSize(rpg->menu.button_1300_rect, rpg->menu.size_1300_button);
    sfRectangleShape_setPosition(rpg->menu.button_1300_rect, rpg->menu.pos_1300_button);
    sfRectangleShape_setFillColor(rpg->menu.button_1300_rect, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->menu.button_1300_rect, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->menu.button_1300_rect, 10);
}

void create_300_button(RPG_t *rpg)
{
    rpg->menu.button_300_rect = sfRectangleShape_create();
    rpg->menu.size_300_button.x = 180;
    rpg->menu.size_300_button.y = 125;
    rpg->menu.pos_300_button.x = 1300;
    rpg->menu.pos_300_button.y = 400;

    sfRectangleShape_setSize(rpg->menu.button_300_rect, rpg->menu.size_300_button);
    sfRectangleShape_setPosition(rpg->menu.button_300_rect, rpg->menu.pos_300_button);
    sfRectangleShape_setFillColor(rpg->menu.button_300_rect, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->menu.button_300_rect, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->menu.button_300_rect, 10);
}
