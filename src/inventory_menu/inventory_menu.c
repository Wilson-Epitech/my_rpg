/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** inventory_menu
*/

#include "all_struct.h"

void inventory_menu_func(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw, rpg->inventory_menu.menu, NULL);
}

int press_inventory(RPG_t *rpg, int menu_game)
{
    if (rpg->inventory_menu.keyI_pressed == 1) {
        menu_game = 0;
        rpg->inventory_menu.keyI_pressed = 0;
        return menu_game;
    } else if (rpg->inventory_menu.keyI_pressed == 0) {
        rpg->inventory_menu.keyI_pressed = 1;
        menu_game = 1;
        return menu_game;
    }
    return 0;
}

void click_back_setting(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->inventory_menu.button_settings)) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->inventory_menu.keyI_pressed = 1;;
        }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            rpg->inventory_menu.keyI_pressed = 1;;
    }
}

void draw_inventory(RPG_t *rpg)
{
    if (rpg->inventory_menu.keyI_pressed == 1) {
        inventory_menu_func(rpg);
        draw_inventory_stat(rpg);
        draw_buttons_inventory(rpg);
        if (is_on_button(rpg, rpg->inventory_menu.button_settings)
        && sfMouse_isButtonPressed(0)) {
                rpg->inventory_menu.keyI_pressed = 2;
            }
        while (sfMouse_isButtonPressed(0)) {
        }
    }
    draw_setting_inventory(rpg);
}
