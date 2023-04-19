/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** draw_text_current
*/
#include "quest.h"

void draw_current_text(sfRenderWindow *wdw, quest_t *quest)
{
    if (quest->main_quest == 0)
            sfRenderWindow_drawText(wdw, quest->current_quest_grandma, NULL);
        if (quest->main_quest == 1)
            sfRenderWindow_drawText(wdw, quest->current_quest_shaolin, NULL);
        if (quest->main_quest == 2)
            sfRenderWindow_drawText(wdw, quest->current_quest_dragon, NULL);
}
