/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_menu
*/

#include "all_struct.h"

void destroy_text_menu(RPG_t *rpg)
{
    sfText_destroy(rpg->menu.text_game_name);
    sfText_destroy(rpg->menu.click_to_play);
    sfText_destroy(rpg->menu.history);
    sfText_destroy(rpg->menu.play);
    sfText_destroy(rpg->menu.option);
    sfText_destroy(rpg->menu.credit);
    sfText_destroy(rpg->menu.back);
    sfText_destroy(rpg->menu.music);
    sfText_destroy(rpg->menu.effect);
    sfText_destroy(rpg->menu.fullscreen);
    sfText_destroy(rpg->menu.middle_screen);
    sfText_destroy(rpg->menu.small_screen);
    sfText_destroy(rpg->menu.resolutions);
    sfText_destroy(rpg->menu.min_fps);
    sfText_destroy(rpg->menu.mid_fps);
    sfText_destroy(rpg->menu.high_fps);
    sfText_destroy(rpg->menu.fps);
    sfText_destroy(rpg->menu.credit_name);
    sfText_destroy(rpg->menu.quit);
    sfFont_destroy(rpg->menu.game_name_font);
}

void destroy_rect_menu(RPG_t *rpg)
{
    sfRectangleShape_destroy(rpg->menu.music_bar);
    sfRectangleShape_destroy(rpg->menu.slider_music);
    sfRectangleShape_destroy(rpg->menu.effect_bar);
    sfRectangleShape_destroy(rpg->menu.slider_effect);
    sfRectangleShape_destroy(rpg->menu.mute_effect);
    sfRectangleShape_destroy(rpg->menu.button_full_rect);
    sfRectangleShape_destroy(rpg->menu.button_1300_rect);
    sfRectangleShape_destroy(rpg->menu.button_300_rect);
    sfRectangleShape_destroy(rpg->menu.button_min_fps);
    sfRectangleShape_destroy(rpg->menu.button_middle_fps);
    sfRectangleShape_destroy(rpg->menu.button_high_fps);
    sfRectangleShape_destroy(rpg->menu.rect_name);
}

void destroy_menu(RPG_t *rpg)
{
    sfTexture_destroy(rpg->menu.bk_menu_img);
    sfSprite_destroy(rpg->menu.bk_menu_img_sprite);
    sfTexture_destroy(rpg->menu.button_history_txt);
    sfSprite_destroy(rpg->menu.button_history_spr);
    sfSprite_destroy(rpg->menu.button_play_spr);
    sfSprite_destroy(rpg->menu.button_option_spr);
    sfSprite_destroy(rpg->menu.button_credit_spr);
    sfSprite_destroy(rpg->menu.button_back_spr);
    sfSprite_destroy(rpg->menu.button_quit_spr);
    sfSprite_destroy(rpg->menu.mute_spr);
    sfMusic_destroy(rpg->menu.back_music);
    sfClock_destroy(rpg->menu.clock);
    sfTexture_destroy(rpg->menu.mute_txt);
    destroy_text_menu(rpg);
    sfFont_destroy(rpg->menu.game_number_font);
    destroy_rect_menu(rpg);
}

void destroy_history(RPG_t *rpg)
{
    sfSprite_destroy(rpg->history.sprite_history);
    sfTexture_destroy(rpg->history.texture_history);
    sfClock_destroy(rpg->history.clock_history);
}
