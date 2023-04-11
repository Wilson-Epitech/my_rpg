/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_resolution
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_fullscreen_button(menu_t *menu)
{
    menu->button_full_rect = sfRectangleShape_create();
    menu->size_full_button.x = 180;
    menu->size_full_button.y = 125;
    menu->pos_full_button.x = 700;
    menu->pos_full_button.y = 400;

    sfRectangleShape_setSize(menu->button_full_rect, menu->size_full_button);
    sfRectangleShape_setPosition(menu->button_full_rect, menu->pos_full_button);
    sfRectangleShape_setFillColor(menu->button_full_rect, sfTransparent);
    sfRectangleShape_setOutlineColor(menu->button_full_rect, sfYellow);
    sfRectangleShape_setOutlineThickness(menu->button_full_rect, 10);
}

void create_1300_button(menu_t *menu)
{
    menu->button_1300_rect = sfRectangleShape_create();
    menu->size_1300_button.x = 180;
    menu->size_1300_button.y = 125;
    menu->pos_1300_button.x = 1000;
    menu->pos_1300_button.y = 400;

    sfRectangleShape_setSize(menu->button_1300_rect, menu->size_1300_button);
    sfRectangleShape_setPosition(menu->button_1300_rect, menu->pos_1300_button);
    sfRectangleShape_setFillColor(menu->button_1300_rect, sfTransparent);
    sfRectangleShape_setOutlineColor(menu->button_1300_rect, sfYellow);
    sfRectangleShape_setOutlineThickness(menu->button_1300_rect, 10);
}

void create_300_button(menu_t *menu)
{
    menu->button_300_rect = sfRectangleShape_create();
    menu->size_300_button.x = 180;
    menu->size_300_button.y = 125;
    menu->pos_300_button.x = 1300;
    menu->pos_300_button.y = 400;

    sfRectangleShape_setSize(menu->button_300_rect, menu->size_300_button);
    sfRectangleShape_setPosition(menu->button_300_rect, menu->pos_300_button);
    sfRectangleShape_setFillColor(menu->button_300_rect, sfTransparent);
    sfRectangleShape_setOutlineColor(menu->button_300_rect, sfYellow);
    sfRectangleShape_setOutlineThickness(menu->button_300_rect, 10);
}
