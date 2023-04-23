/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** quest
*/

#ifndef QUEST_H_
    #define QUEST_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include "menu.h"
    #include "sprite.h"

typedef struct quest_s {
    sfRectangleShape *rect_help;
    sfRectangleShape *rect_current_quest;
    sfVector2f pos_rect_help;
    sfVector2f size_rect_help;
    sfTexture *exclam_quest_txt;
    sfSprite *exclam_quest_spr;
    sfText *help_1;
    sfText *help_2;
    sfText *main_quest_1;
    sfText *main_quest_2;
    sfText *current_quest_grandma;
    sfText *current_quest_shaolin;
    sfText *current_quest_dragon;
    int help;
    int main_quest;
    int npc;
} quest_t;

typedef struct player_s {
    sfVector2f set_player_pos;
    int hp;
    int xp;
    int level;
    int level_xp;
    int def;
    int atk;
} player_t;

enum npc {
    NO_NPC,
    GRANDMA,
    SHAOLIN
};

#endif /* !QUEST_H_ */
