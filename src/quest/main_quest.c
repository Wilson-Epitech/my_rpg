/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main_quest
*/

#include "quest.h"

void init_text_main_quest(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {1000, 50};

    char *str = "\n\nYOU\n\nPlease  help  me\n\n\n Of  course  you  know  of  "
    "the  terrible  dragon\n Can  you  please  find  his  cave\n Someone  need"
    "   to  stop  him  from  hurting  more  people\n";
    quest->main_quest_1 = sfText_create();
    sfText_setFont(quest->main_quest_1, menu->game_name_font);
    sfText_setString(quest->main_quest_1, str);
    sfText_setCharacterSize(quest->main_quest_1, 20);
    sfText_setPosition(quest->main_quest_1, pos);
    sfText_setColor(quest->main_quest_1, sfYellow);
}

void init_text_main_quest2(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {1000, 50};

    char *str = "\n\n Once  you  get  to  him\n\n Please  free  him  of  the"
    "  black  force  that  is\n making  him  violent\n\n He  is  "
    "a menace to  all  our  lives  like  this\n";
    quest->main_quest_2 = sfText_create();
    sfText_setFont(quest->main_quest_2, menu->game_name_font);
    sfText_setString(quest->main_quest_2, str);
    sfText_setCharacterSize(quest->main_quest_2, 20);
    sfText_setPosition(quest->main_quest_2, pos);
    sfText_setColor(quest->main_quest_2, sfYellow);
}

void talk_to_shaolin(quest_t *quest, sfRenderWindow *wdw)
{
    sfVector2f size = {800, 300};
    sfVector2f pos_rect = {1000, 50};
    sfVector2f pos_excla = {740, 275};

    if (quest->npc != SHAOLIN && quest->main_quest == 1) {
        sfSprite_setPosition(quest->exclam_quest_spr, pos_excla);
        sfRenderWindow_drawSprite(wdw, quest->exclam_quest_spr, NULL);
    }
    if (quest->npc == SHAOLIN && quest->main_quest > 0) {
        sfRectangleShape_setSize(quest->rect_help, size);
        sfRectangleShape_setPosition(quest->rect_help, pos_rect);
        sfRenderWindow_drawRectangleShape(wdw, quest->rect_help, NULL);
        if (quest->main_quest == 1) {
            sfRenderWindow_drawText(wdw, quest->main_quest_1, NULL);
            press_enter_main(quest);
        }
        if (quest->main_quest == 2)
            sfRenderWindow_drawText(wdw, quest->main_quest_2, NULL);
    }
}
