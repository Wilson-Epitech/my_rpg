/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** draw_option_rect_text
*/

#include "all_struct.h"

void draw_rect_option_fps(RPG_t *rpg)
{
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.button_min_fps, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.button_middle_fps, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.button_high_fps, NULL);
}

void draw_rect_option(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_back_spr, NULL);
    sfRenderWindow_drawSprite(rpg->window.wdw, rpg->menu.mute_spr, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.music_bar, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.slider_music, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.effect_bar, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.slider_effect, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.button_full_rect, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.button_1300_rect, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->menu.button_300_rect, NULL);
    draw_rect_option_fps(rpg);
}

void draw_text_option(RPG_t *rpg)
{
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.back, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.music, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.effect, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.fullscreen, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.middle_screen, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.small_screen, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.resolutions, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.min_fps, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.mid_fps, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.high_fps, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.fps, NULL);
}
