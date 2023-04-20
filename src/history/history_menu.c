/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** history on !
*/

#include "all_struct.h"

void click_history(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_history_spr)) {
        if (rpg->menu.check_first_menu == 2 &&
        sfMouse_isButtonPressed(0)) {
            rpg->menu.check_first_menu = 5;
            rpg->history.anim_finished1 = 1;
        }
    }
    if (rpg->history.anim_finished1 == 1) {
        rpg->history.anim_finished1 = 9;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) &&
    rpg->history.anim_finished2 == 3 &&
    rpg->menu.check_first_menu != 2) {
        rpg->history.anim_finished1 = 2;
    }
}

void check_history(RPG_t *rpg)
{
    if (rpg->history.anim_finished1 == 2 &&
    rpg->menu.check_first_menu == 5) {
        rpg->menu.check_first_menu = 2;
    }
    if (rpg->menu.check_first_menu == 2) {
        rpg->history.anim_finished1 = 0;
        rpg->history.anim_finished2 = 0;
        rpg->history.menu_history.top = 30;
    }
}
