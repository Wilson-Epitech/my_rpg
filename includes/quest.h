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

enum npc {
    NO_NPC,
    GRANDMA,
    SHAOLIN
};

void init_help_rect(quest_t *quest);
void init_text_help(quest_t *quest, menu_t *menu);
void init_text_help2(quest_t *quest, menu_t *menu);
void init_text_main_quest(quest_t *quest, menu_t *menu);
void init_text_main_quest2(quest_t *quest, menu_t *menu);
void press_enter_help(quest_t *quest);
void press_enter_main(quest_t *quest);
void init_exclam(quest_t *quest);
void talk_to_grandma(quest_t *quest, sfRenderWindow *wdw);
void talk_to_shaolin(quest_t *quest, sfRenderWindow *wdw);
void init_rect_current_quest(quest_t *quest);
void init_text_talk_grand(quest_t *quest, menu_t *menu);
void init_text_talk_shao(quest_t *quest, menu_t *menu);
void init_text_dragon(quest_t *quest, menu_t *menu);
void destroy_quest(StructSprite *struct_sprite, quest_t *quest);
#endif /* !QUEST_H_ */
