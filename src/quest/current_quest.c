/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** current_quest
*/

#include "all_struct.h"

void init_rect_current_quest(RPG_t *rpg)
{
    sfVector2f pos = {1400, 20};
    sfVector2f size = {500, 100};

    rpg->quest.rect_current_quest = sfRectangleShape_create();
    sfRectangleShape_setSize(rpg->quest.rect_current_quest, size);
    sfRectangleShape_setPosition(rpg->quest.rect_current_quest, pos);
    sfRectangleShape_setFillColor(rpg->quest.rect_current_quest,
    sfColor_fromRGBA(0, 0, 0, 200));
    sfRectangleShape_setOutlineColor(rpg->quest.rect_current_quest, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->quest.rect_current_quest, 10);
}

void init_text_talk_grand(RPG_t *rpg)
{
    sfVector2f pos = {1480, 60};

    char *str = "Go   talk   to  grandma\n";
    rpg->quest.current_quest_grandma = sfText_create();
    sfText_setFont(rpg->quest.current_quest_grandma, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.current_quest_grandma, str);
    sfText_setCharacterSize(rpg->quest.current_quest_grandma, 20);
    sfText_setPosition(rpg->quest.current_quest_grandma, pos);
    sfText_setColor(rpg->quest.current_quest_grandma, sfYellow);
}

void init_text_talk_shao(RPG_t *rpg)
{
    sfVector2f pos = {1500, 45};

    char *str = "Go  talk  to  the\ndistressed  villager\n";
    rpg->quest.current_quest_shaolin = sfText_create();
    sfText_setFont(rpg->quest.current_quest_shaolin, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.current_quest_shaolin, str);
    sfText_setCharacterSize(rpg->quest.current_quest_shaolin, 20);
    sfText_setPosition(rpg->quest.current_quest_shaolin, pos);
    sfText_setColor(rpg->quest.current_quest_shaolin, sfYellow);
}

void init_text_dragon(RPG_t *rpg)
{
    sfVector2f pos = {1500, 60};

    char *str = "Go  beat  the  dragon\n";
    rpg->quest.current_quest_dragon = sfText_create();
    sfText_setFont(rpg->quest.current_quest_dragon, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.current_quest_dragon, str);
    sfText_setCharacterSize(rpg->quest.current_quest_dragon, 20);
    sfText_setPosition(rpg->quest.current_quest_dragon, pos);
    sfText_setColor(rpg->quest.current_quest_dragon, sfYellow);
}
