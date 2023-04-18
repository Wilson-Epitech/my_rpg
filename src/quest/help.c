/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** help
*/
#include "my.h"

void init_help_rect(quest_t *quest)
{
    quest->rect_help = sfRectangleShape_create();
    quest->pos_rect_help.x = 300;
    quest->pos_rect_help.y = 150;
    quest->size_rect_help.x = 500;
    quest->size_rect_help.y = 450;

    sfRectangleShape_setSize(quest->rect_help, quest->size_rect_help);
    sfRectangleShape_setPosition(quest->rect_help, quest->pos_rect_help);
    sfRectangleShape_setFillColor(quest->rect_help,
    sfColor_fromRGBA(15, 15, 15, 200));
}

void init_text_help(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {300, 150};

    char *str = "\n\n Hello  young  mage\n I  have  seen\n you  around"
    "  before\n but  I  wanted  to  help  you\n before   you  went\n"
    "on  to  tackle  your  quest\n\n\n\n\n\n You  will  have  to"
    "  press  enter\n to  continue  the  dialogue";
    quest->help_1 = sfText_create();
    sfText_setFont(quest->help_1, menu->game_name_font);
    sfText_setString(quest->help_1, str);
    sfText_setCharacterSize(quest->help_1, 20);
    sfText_setPosition(quest->help_1, pos);
    sfText_setColor(quest->help_1, sfYellow);
}

void init_text_help2(quest_t *quest, menu_t *menu)
{
    sfVector2f pos = {300, 150};

    char *str = "\n\n To  start  talking  to\nany  of  the  villagers\nget  "
    "close  to  them\n\n\n\n To  walk  use  the\ndirectional  arrows\n\n\n "
    "Go  find  the  villager\n who needs  your  help\n";
    quest->help_2 = sfText_create();
    sfText_setFont(quest->help_2, menu->game_name_font);
    sfText_setString(quest->help_2, str);
    sfText_setCharacterSize(quest->help_2, 25);
    sfText_setPosition(quest->help_2, pos);
    sfText_setColor(quest->help_2, sfYellow);
}

void init_exclam(quest_t *quest)
{
    sfVector2f pos = {150, 70};
    sfVector2f size = {0.2, 0.2};

    quest->exclam_quest_txt =
    sfTexture_createFromFile("textures/characters/exclam_quest.png", NULL);
    quest->exclam_quest_spr = sfSprite_create();
    sfSprite_setTexture(quest->exclam_quest_spr,
    quest->exclam_quest_txt, sfTrue);
    sfSprite_setPosition(quest->exclam_quest_spr, pos);
    sfSprite_setScale(quest->exclam_quest_spr, size);
}

void talk_to_grandma(quest_t *quest, sfRenderWindow *wdw)
{
    if (quest->npc != GRANDMA && quest->help == 0)
        sfRenderWindow_drawSprite(wdw, quest->exclam_quest_spr, NULL);
    if (quest->npc == GRANDMA) {
        sfRenderWindow_drawRectangleShape(wdw, quest->rect_help, NULL);
        if (quest->help == 0) {
            sfRenderWindow_drawText(wdw, quest->help_1, NULL);
            press_enter_help(quest);
        }
        if (quest->help == 1) {
            quest->main_quest = 1;
            sfRenderWindow_drawText(wdw, quest->help_2, NULL);
        }
    }
}
