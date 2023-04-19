/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** history on !
*/

#include "my.h"
#include "menu.h"
#include "maps.h"

void click_history(history_t *history, menu_t *menu)
{
    if (is_on_button(menu, menu->button_history_spr)) {
        if (menu->check_first_menu == 2 && sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 5;
            history->anim_finished1 = 2;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && history->anim_finished1 == 3) {
        history->anim_finished2 = 2;
    }
}

void check_history(history_t *history,  menu_t *menu)
{
    if (history->anim_finished2 == 3 && menu->check_first_menu == 5) {
        menu->check_first_menu = 2;
    }
}
