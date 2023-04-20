/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main_menu
*/

#include "all_struct.h"

void menu_first_page(RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 1) {
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->menu.text_game_name, NULL);
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->menu.click_to_play, NULL);
        hover_click_to_play(rpg);
    }
}

static void draw_sprite_text_snd(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_history_spr, NULL);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_play_spr, NULL);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_option_spr, NULL);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_credit_spr, NULL);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_back_spr, NULL);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->menu.button_quit_spr, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,rpg->menu.history, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.play, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.option, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.credit, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.back, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.quit, NULL);
}

void menu_snd_page(RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 2) {
        draw_sprite_text_snd(rpg);
        hover_history(rpg);
        hover_play(rpg); hover_option(rpg);
        hover_credit(rpg);
        hover_back(rpg);
        hover_quit(rpg);
        click_back(rpg);
        option_click(rpg);
        credit_click(rpg);
        click_play(rpg);
        click_quit(rpg);
    }
}

void menu_option_page(RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 3) {
        draw_rect_option(rpg);
        draw_text_option(rpg);
        select_volume(rpg);
        select_volume_effect(rpg);
        hover_back(rpg);
        click_back_option(rpg);
        display_rect_mute(rpg);
        select_mute(rpg);
        deselect_mute(rpg);
        select_button_full(rpg);
        select_button_middle(rpg);
        select_button_small(rpg);
        check_choosen_res(rpg);
        select_min_fps(rpg);
        select_mid_fps(rpg);
        select_high_fps(rpg);
        check_choosen_fps(rpg);
    }
}

void credit_page(RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 4) {
        sfRenderWindow_drawSprite(rpg->window.wdw,
            rpg->menu.button_back_spr, NULL);
        sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.back, NULL);
        hover_back(rpg);
        click_back_option(rpg);
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
            rpg->menu.rect_name, NULL);
        sfRenderWindow_drawText(rpg->window.wdw, rpg->menu.credit_name, NULL);
    }
}
