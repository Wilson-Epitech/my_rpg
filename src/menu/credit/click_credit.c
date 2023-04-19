/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_credit
*/


#include "all_struct.h"

void credit_click(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_credit_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_first_menu = 4;
        }
    }
}
