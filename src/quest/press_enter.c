/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** press_enter
*/

#include "all_struct.h"

void press_enter_help(RPG_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        rpg->quest.help += 1;
    }
}

void press_enter_main(RPG_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        rpg->quest.main_quest += 1;
    }
}
