/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main_menu
*/

#include "all_struct.h"

void menu_first_page(sfRenderWindow *wdw, RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 1) {
        sfRenderWindow_drawText(wdw, rpg->menu.text_game_name, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.click_to_play, NULL);
        hover_click_to_play(rpg);
    }
}

void menu_snd_page(sfRenderWindow *wdw, RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 2) {
        sfRenderWindow_drawSprite(wdw, rpg->menu.button_history_spr, NULL);
        sfRenderWindow_drawSprite(wdw, rpg->menu.button_play_spr, NULL);
        sfRenderWindow_drawSprite(wdw, rpg->menu.button_option_spr, NULL);
        sfRenderWindow_drawSprite(wdw, rpg->menu.button_credit_spr, NULL);
        sfRenderWindow_drawSprite(wdw, rpg->menu.button_back_spr, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.history, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.play, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.option, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.credit, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.back, NULL);
        hover_history(rpg);
        hover_play(rpg); hover_option(rpg);
        hover_credit(rpg);
        hover_back(rpg);
        click_back(rpg);
        option_click(rpg);
        credit_click(rpg);
        click_play(rpg);
    }
}

void menu_option_page(sfRenderWindow *wdw, RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 3) {
        draw_rect_option(wdw, rpg);
        draw_text_option(wdw, rpg);
        select_volume(rpg);
        select_volume_effect(rpg);
        hover_back(rpg);
        click_back_option(rpg);
        display_rect_mute(rpg, wdw);
        select_mute(rpg);
        deselect_mute(rpg);
        select_button_full(rpg);
        select_button_middle(rpg);
        select_button_small(rpg);
        check_choosen_res(rpg, wdw);
        select_min_fps(rpg);
        select_mid_fps(rpg);
        select_high_fps(rpg);
        check_choosen_fps(rpg, wdw);
    }
}

void credit_page(sfRenderWindow *wdw, RPG_t *rpg)
{
    if (rpg->menu.check_first_menu == 4) {
        sfRenderWindow_drawSprite(wdw, rpg->menu.button_back_spr, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.back, NULL);
        hover_back(rpg);
        click_back_option(rpg);
        sfRenderWindow_drawRectangleShape(wdw, rpg->menu.rect_name, NULL);
        sfRenderWindow_drawText(wdw, rpg->menu.credit_name, NULL);
    }
}
