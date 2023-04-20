/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** inventory_menu
*/

#include "all_struct.h"

void draw_fps(RPG_t *rpg)
{
    select_min_fps(rpg);
    select_mid_fps(rpg);
    select_high_fps(rpg);
    check_choosen_fps(rpg);
}

void draw_setting_inventory(RPG_t *rpg)
{
    if (rpg->inventory_menu.keyI_pressed == 2) {
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->inventory_menu.rect_setting, NULL);
        draw_rect_option(rpg);
        draw_text_option(rpg);
        select_volume(rpg);
        select_volume_effect(rpg);
        hover_back(rpg);
        click_back_setting(rpg);
        display_rect_mute(rpg);
        select_mute(rpg);
        deselect_mute(rpg);
        select_button_full(rpg);
        select_button_middle(rpg);
        select_button_small(rpg);
        check_choosen_res(rpg);
        draw_fps(rpg);
    }
}

void draw_buttons_inventory(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->inventory_menu.button_saving, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.saving, NULL);
    hover_saving(rpg);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->inventory_menu.button_loading, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.loading, NULL);
    hover_loading(rpg);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->inventory_menu.button_settings, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.settings, NULL);
    hover_settings(rpg);
}

void draw_inventory_stat(RPG_t *rpg)
{
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->inventory_menu.rect_char_menu, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.stat, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.health, NULL);
    sfRenderWindow_drawText(rpg->window.wdw, rpg->inventory_menu.xp, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.level, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.atk, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.def, NULL);
}
