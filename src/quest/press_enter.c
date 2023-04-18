/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** press_enter
*/

#include "quest.h"

void press_enter_help(quest_t *quest)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        quest->help += 1;
    }
}

void press_enter_main(quest_t *quest)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        quest->main_quest += 1;
    }
}
