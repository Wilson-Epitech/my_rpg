/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** draw_option_rect_text
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void draw_rect_option(sfRenderWindow *wdw, menu_t *menu)
{
    sfRenderWindow_drawSprite(wdw, menu->button_back_spr, NULL);
    sfRenderWindow_drawSprite(wdw, menu->mute_spr, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->music_bar, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->slider_music, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->effect_bar, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->slider_effect, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->button_full_rect, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->button_1300_rect, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->button_300_rect, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->button_min_fps, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->button_middle_fps, NULL);
    sfRenderWindow_drawRectangleShape(wdw, menu->button_high_fps, NULL);
}

void draw_text_option(sfRenderWindow *wdw, menu_t *menu)
{
    sfRenderWindow_drawText(wdw, menu->back, NULL);
    sfRenderWindow_drawText(wdw, menu->music, NULL);
    sfRenderWindow_drawText(wdw, menu->effect, NULL);
    sfRenderWindow_drawText(wdw, menu->fullscreen, NULL);
    sfRenderWindow_drawText(wdw, menu->middle_screen, NULL);
    sfRenderWindow_drawText(wdw, menu->small_screen, NULL);
    sfRenderWindow_drawText(wdw, menu->resolutions, NULL);
    sfRenderWindow_drawText(wdw, menu->min_fps, NULL);
    sfRenderWindow_drawText(wdw, menu->mid_fps, NULL);
    sfRenderWindow_drawText(wdw, menu->high_fps, NULL);
    sfRenderWindow_drawText(wdw, menu->fps, NULL);
}
