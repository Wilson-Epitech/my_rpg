/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** load
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void load_forms_option(menu_t *menu)
{
    create_mute_sprite(menu);
    create_bar_music(menu);
    create_slider_music(menu);
    create_music_txt(menu);
    create_bar_effect(menu);
    create_slider_effect(menu);
    create_effect_txt(menu);
    create_trans_mute(menu);
    create_fullscreen_button(menu);
    create_1300_button(menu);
    create_300_button(menu);
}

static void load_option(sfRenderWindow *wdw, menu_t *menu)
{
    load_forms_option(menu);
    create_full_txt(menu);
    create_1300_txt(menu);
    create_300_txt(menu);
    resolutions(menu);
    create_30_fps(menu);
    create_60_fps(menu);
    create_90_fps(menu);
    create_txt_min_fps(menu);
    create_txt_mid_fps(menu);
    create_txt_high_fps(menu);
    create_txt_framelimit(menu);
    sfRenderWindow_setFramerateLimit(wdw, 90);
}

void load_menu(sfRenderWindow *wdw, history_t *history, menu_t *menu)
{
    load_menu_music(menu);
    create_background_img(menu);
    create_history(history);
    create_history_end(history);
    print_name_menu(menu);
    print_click_to_play(menu);
    button_menu_history(menu);
    button_menu_option(menu);
    button_menu_play(menu);
    button_menu_credit(menu);
    button_history_text(menu);
    button_play_text(menu);
    button_option_text(menu);
    button_credit_text(menu);
    button_back_text(menu);
    button_menu_back(menu);
    load_option(wdw, menu);
    create_txt_credit(menu);
    create_rect_credit(menu);
    menu->clock = sfClock_create();
}

void load_history(history_t *history)
{
    history->clock_history = sfClock_create();
}
