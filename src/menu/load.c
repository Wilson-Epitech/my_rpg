/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** load
*/

#include "all_struct.h"

void load_forms_option(RPG_t *rpg)
{
    create_mute_sprite(rpg);
    create_bar_music(rpg);
    create_slider_music(rpg);
    create_music_txt(rpg);
    create_bar_effect(rpg);
    create_slider_effect(rpg);
    create_effect_txt(rpg);
    create_trans_mute(rpg);
    create_fullscreen_button(rpg);
    create_1300_button(rpg);
    create_300_button(rpg);
}

static void load_option(RPG_t *rpg)
{
    load_forms_option(rpg);
    create_full_txt(rpg);
    create_1300_txt(rpg);
    create_300_txt(rpg);
    resolutions(rpg);
    create_30_fps(rpg);
    create_60_fps(rpg);
    create_90_fps(rpg);
    create_txt_min_fps(rpg);
    create_txt_mid_fps(rpg);
    create_txt_high_fps(rpg);
    create_txt_framelimit(rpg);
    sfRenderWindow_setFramerateLimit(rpg->window.wdw, 60);
}

static void load_buttons(RPG_t *rpg)
{
    button_menu_history(rpg);
    button_menu_option(rpg);
    button_menu_play(rpg);
    button_menu_credit(rpg);
    button_history_text(rpg);
    button_play_text(rpg);
    button_option_text(rpg);
    button_credit_text(rpg);
    button_back_text(rpg);
    button_menu_back(rpg);
    init_button_quit(rpg);
    init_txt_quit(rpg);
}

void load_menu(RPG_t *rpg)
{
    load_menu_music(rpg);
    create_background_img(rpg);
    create_history(rpg);
    print_name_menu(rpg);
    print_click_to_play(rpg);
    load_buttons(rpg);
    load_option(rpg);
    create_txt_credit(rpg);
    create_rect_credit(rpg);
    init_button_resume(rpg);
    init_txt_resume(rpg);
    rpg->menu.clock = sfClock_create();
}
