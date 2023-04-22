/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_play
*/

#include "all_struct.h"

void click_play(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_play_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            sfMusic_play(rpg->menu.new_game_sound);
            sfMusic_play(rpg->menu.new_game_sound);
            rpg->menu.check_first_menu = 6;
        }
    }
}
