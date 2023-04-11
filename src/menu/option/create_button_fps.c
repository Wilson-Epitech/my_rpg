/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_button_fps
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_30_fps(menu_t *menu)
{
    menu->button_min_fps = sfRectangleShape_create();
    menu->size_min_fps_button.x = 180;
    menu->size_min_fps_button.y = 125;
    menu->pos_min_fps_button.x = 700;
    menu->pos_min_fps_button.y = 600;

    sfRectangleShape_setSize(menu->button_min_fps,
    menu->size_min_fps_button);
    sfRectangleShape_setPosition(menu->button_min_fps,
    menu->pos_min_fps_button);
    sfRectangleShape_setFillColor(menu->button_min_fps, sfTransparent);
    sfRectangleShape_setOutlineColor(menu->button_min_fps, sfYellow);
    sfRectangleShape_setOutlineThickness(menu->button_min_fps, 10);
}

void create_60_fps(menu_t *menu)
{
    menu->button_middle_fps = sfRectangleShape_create();
    menu->size_mid_fps_button.x = 180;
    menu->size_mid_fps_button.y = 125;
    menu->pos_mid_fps_button.x = 1000;
    menu->pos_mid_fps_button.y = 600;

    sfRectangleShape_setSize(menu->button_middle_fps,
    menu->size_mid_fps_button);
    sfRectangleShape_setPosition(menu->button_middle_fps,
    menu->pos_mid_fps_button);
    sfRectangleShape_setFillColor(menu->button_middle_fps, sfTransparent);
    sfRectangleShape_setOutlineColor(menu->button_middle_fps, sfYellow);
    sfRectangleShape_setOutlineThickness(menu->button_middle_fps, 10);
}

void create_90_fps(menu_t *menu)
{
    menu->button_high_fps = sfRectangleShape_create();
    menu->size_high_fps_button.x = 180;
    menu->size_high_fps_button.y = 125;
    menu->pos_high_fps_button.x = 1300;
    menu->pos_high_fps_button.y = 600;

    sfRectangleShape_setSize(menu->button_high_fps,
    menu->size_high_fps_button);
    sfRectangleShape_setPosition(menu->button_high_fps,
    menu->pos_high_fps_button);
    sfRectangleShape_setFillColor(menu->button_high_fps, sfTransparent);
    sfRectangleShape_setOutlineColor(menu->button_high_fps, sfYellow);
    sfRectangleShape_setOutlineThickness(menu->button_high_fps, 10);
}
