/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main_menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void menu_first_page(sfRenderWindow *wdw, menu_t *menu)
{
    if (menu->check_first_menu == 1) {
        sfRenderWindow_drawText(wdw, menu->text_game_name, NULL);
        sfRenderWindow_drawText(wdw, menu->click_to_play, NULL);
        hover_click_to_play(menu);
    }
}

void menu_snd_page(sfRenderWindow *wdw, menu_t *menu)
{
    if (menu->check_first_menu == 2) {
        sfRenderWindow_drawSprite(wdw, menu->button_history_spr, NULL);
        sfRenderWindow_drawSprite(wdw, menu->button_play_spr, NULL);
        sfRenderWindow_drawSprite(wdw, menu->button_option_spr, NULL);
        sfRenderWindow_drawSprite(wdw, menu->button_credit_spr, NULL);
        sfRenderWindow_drawSprite(wdw, menu->button_back_spr, NULL);
        sfRenderWindow_drawText(wdw, menu->history, NULL);
        sfRenderWindow_drawText(wdw, menu->play, NULL);
        sfRenderWindow_drawText(wdw, menu->option, NULL);
        sfRenderWindow_drawText(wdw, menu->credit, NULL);
        sfRenderWindow_drawText(wdw, menu->back, NULL);
        hover_history(menu);
        hover_play(menu); hover_option(menu);
        hover_credit(menu);
        hover_back(menu);
        click_back(menu);
        option_click(menu);
        credit_click(menu);
        click_play(menu);
    }
}

void menu_option_page(sfRenderWindow *wdw, menu_t *menu)
{
    if (menu->check_first_menu == 3) {
        draw_rect_option(wdw, menu);
        draw_text_option(wdw, menu);
        select_volume(menu);
        select_volume_effect(menu);
        hover_back(menu);
        click_back_option(menu);
        display_rect_mute(menu, wdw);
        select_mute(menu);
        deselect_mute(menu);
        select_button_full(menu);
        select_button_middle(menu);
        select_button_small(menu);
        check_choosen_res(menu, wdw);
        select_min_fps(menu);
        select_mid_fps(menu);
        select_high_fps(menu);
        check_choosen_fps(menu, wdw);
    }
}

void credit_page(sfRenderWindow *wdw, menu_t *menu)
{
    if (menu->check_first_menu == 4) {
        sfRenderWindow_drawSprite(wdw, menu->button_back_spr, NULL);
        sfRenderWindow_drawText(wdw, menu->back, NULL);
        hover_back(menu);
        click_back_option(menu);
        sfRenderWindow_drawRectangleShape(wdw, menu->rect_name, NULL);
        sfRenderWindow_drawText(wdw, menu->credit_name, NULL);
    }
}
