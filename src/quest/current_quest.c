/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** current_quest
*/

#include "quest.h"

void init_rect_current_quest(quest_t *quest)
{
    sfVector2f pos = {1400, 20};
    sfVector2f size = {500, 100};

    quest->rect_current_quest = sfRectangleShape_create();
    sfRectangleShape_setSize(quest->rect_current_quest, size);
    sfRectangleShape_setPosition(quest->rect_current_quest, pos);
    sfRectangleShape_setFillColor(quest->rect_current_quest,
    sfColor_fromRGBA(0, 0, 0, 200));
    sfRectangleShape_setOutlineColor(quest->rect_current_quest, sfYellow);
    sfRectangleShape_setOutlineThickness(quest->rect_current_quest, 10);
}

void init_text_talk_grand(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {1480, 60};

    char *str = "Go   talk   to  grandma\n";
    quest->current_quest_grandma = sfText_create();
    sfText_setFont(quest->current_quest_grandma, menu->game_name_font);
    sfText_setString(quest->current_quest_grandma, str);
    sfText_setCharacterSize(quest->current_quest_grandma, 20);
    sfText_setPosition(quest->current_quest_grandma, pos);
    sfText_setColor(quest->current_quest_grandma, sfYellow);
}

void init_text_talk_shao(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {1500, 45};

    char *str = "Go  talk  to  the\ndistressed  villager\n";
    quest->current_quest_shaolin = sfText_create();
    sfText_setFont(quest->current_quest_shaolin, menu->game_name_font);
    sfText_setString(quest->current_quest_shaolin, str);
    sfText_setCharacterSize(quest->current_quest_shaolin, 20);
    sfText_setPosition(quest->current_quest_shaolin, pos);
    sfText_setColor(quest->current_quest_shaolin, sfYellow);
}

void init_text_dragon(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {1500, 60};

    char *str = "Go  beat  the  dragon\n";
    quest->current_quest_dragon = sfText_create();
    sfText_setFont(quest->current_quest_dragon, menu->game_name_font);
    sfText_setString(quest->current_quest_dragon, str);
    sfText_setCharacterSize(quest->current_quest_dragon, 20);
    sfText_setPosition(quest->current_quest_dragon, pos);
    sfText_setColor(quest->current_quest_dragon, sfYellow);
}
