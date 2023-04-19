/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_button_fps
*/

#include "all_struct.h"

void create_30_fps(RPG_t *rpg)
{
    rpg->menu.button_min_fps = sfRectangleShape_create();
    rpg->menu.size_min_fps_button.x = 180;
    rpg->menu.size_min_fps_button.y = 125;
    rpg->menu.pos_min_fps_button.x = 700;
    rpg->menu.pos_min_fps_button.y = 600;

    sfRectangleShape_setSize(rpg->menu.button_min_fps,
    rpg->menu.size_min_fps_button);
    sfRectangleShape_setPosition(rpg->menu.button_min_fps,
    rpg->menu.pos_min_fps_button);
    sfRectangleShape_setFillColor(rpg->menu.button_min_fps, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->menu.button_min_fps, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->menu.button_min_fps, 10);
}

void create_60_fps(RPG_t *rpg)
{
    rpg->menu.button_middle_fps = sfRectangleShape_create();
    rpg->menu.size_mid_fps_button.x = 180;
    rpg->menu.size_mid_fps_button.y = 125;
    rpg->menu.pos_mid_fps_button.x = 1000;
    rpg->menu.pos_mid_fps_button.y = 600;

    sfRectangleShape_setSize(rpg->menu.button_middle_fps,
    rpg->menu.size_mid_fps_button);
    sfRectangleShape_setPosition(rpg->menu.button_middle_fps,
    rpg->menu.pos_mid_fps_button);
    sfRectangleShape_setFillColor(rpg->menu.button_middle_fps, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->menu.button_middle_fps, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->menu.button_middle_fps, 10);
}

void create_90_fps(RPG_t *rpg)
{
    rpg->menu.button_high_fps = sfRectangleShape_create();
    rpg->menu.size_high_fps_button.x = 180;
    rpg->menu.size_high_fps_button.y = 125;
    rpg->menu.pos_high_fps_button.x = 1300;
    rpg->menu.pos_high_fps_button.y = 600;

    sfRectangleShape_setSize(rpg->menu.button_high_fps,
    rpg->menu.size_high_fps_button);
    sfRectangleShape_setPosition(rpg->menu.button_high_fps,
    rpg->menu.pos_high_fps_button);
    sfRectangleShape_setFillColor(rpg->menu.button_high_fps, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->menu.button_high_fps, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->menu.button_high_fps, 10);
}
