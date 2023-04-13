/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void destroy_text_menu(menu_t *menu)
{
    sfText_destroy(menu->text_game_name);
    sfText_destroy(menu->click_to_play);
    sfText_destroy(menu->history);
    sfText_destroy(menu->play);
    sfText_destroy(menu->option);
    sfText_destroy(menu->credit);
    sfText_destroy(menu->back);
    sfText_destroy(menu->music);
    sfText_destroy(menu->effect);
    sfText_destroy(menu->fullscreen);
    sfText_destroy(menu->middle_screen);
    sfText_destroy(menu->small_screen);
    sfText_destroy(menu->resolutions);
    sfText_destroy(menu->min_fps);
    sfText_destroy(menu->mid_fps);
    sfText_destroy(menu->high_fps);
    sfText_destroy(menu->fps);
    sfText_destroy(menu->credit_name);
    sfFont_destroy(menu->game_name_font);
    sfFont_destroy(menu->game_number_font);
}

void destroy_rect_menu(menu_t *menu)
{
    sfRectangleShape_destroy(menu->music_bar);
    sfRectangleShape_destroy(menu->slider_music);
    sfRectangleShape_destroy(menu->effect_bar);
    sfRectangleShape_destroy(menu->slider_effect);
    sfRectangleShape_destroy(menu->mute_effect);
    sfRectangleShape_destroy(menu->button_full_rect);
    sfRectangleShape_destroy(menu->button_1300_rect);
    sfRectangleShape_destroy(menu->button_300_rect);
    sfRectangleShape_destroy(menu->button_min_fps);
    sfRectangleShape_destroy(menu->button_middle_fps);
    sfRectangleShape_destroy(menu->button_high_fps);
    sfRectangleShape_destroy(menu->rect_name);
}

void destroy_menu(menu_t *menu)
{
    sfTexture_destroy(menu->bk_menu_img);
    sfSprite_destroy(menu->bk_menu_img_sprite);
    sfTexture_destroy(menu->button_history_txt);
    sfSprite_destroy(menu->button_history_spr);
    sfSprite_destroy(menu->button_play_spr);
    sfSprite_destroy(menu->button_option_spr);
    sfSprite_destroy(menu->button_credit_spr);
    sfSprite_destroy(menu->button_back_spr);
    sfSprite_destroy(menu->mute_spr);
    sfMusic_destroy(menu->back_music);
    sfClock_destroy(menu->clock);
    sfTexture_destroy(menu->mute_txt);
    destroy_text_menu(menu);
    destroy_rect_menu(menu);
}
