/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** help
*/

#include "all_struct.h"

void init_help_rect(RPG_t *rpg)
{
    rpg->quest.rect_help = sfRectangleShape_create();
    rpg->quest.pos_rect_help.x = 300;
    rpg->quest.pos_rect_help.y = 150;
    rpg->quest.size_rect_help.x = 500;
    rpg->quest.size_rect_help.y = 450;

    sfRectangleShape_setSize(rpg->quest.rect_help, rpg->quest.size_rect_help);
    sfRectangleShape_setPosition(rpg->quest.rect_help,
    rpg->quest.pos_rect_help);
    sfRectangleShape_setFillColor(rpg->quest.rect_help,
    sfColor_fromRGBA(15, 15, 15, 200));
}

void init_text_help(RPG_t *rpg)
{
    sfVector2f pos = {300, 150};

    char *str = "\n\n Hello  young  mage\n I  have  seen\n you  around"
    "  before\n but  I  wanted  to  help  you\n before   you  went\n"
    "on  to  tackle  your  quest\n\n\n\n\n\n You  will  have  to"
    "  press  enter\n to  continue  the  dialogue";
    rpg->quest.help_1 = sfText_create();
    sfText_setFont(rpg->quest.help_1, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.help_1, str);
    sfText_setCharacterSize(rpg->quest.help_1, 20);
    sfText_setPosition(rpg->quest.help_1, pos);
    sfText_setColor(rpg->quest.help_1, sfYellow);
}

void init_text_help2(RPG_t *rpg)
{
    sfVector2f pos = {300, 150};

    char *str = "\n\n To  start  talking  to\nany  of  the  villagers\nget  "
    "close  to  them\n\n\n\n To  walk  use  the\ndirectional  arrows\n\n\n "
    "Go  find  the  villager\n who needs  your  help\n";
    rpg->quest.help_2 = sfText_create();
    sfText_setFont(rpg->quest.help_2, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.help_2, str);
    sfText_setCharacterSize(rpg->quest.help_2, 25);
    sfText_setPosition(rpg->quest.help_2, pos);
    sfText_setColor(rpg->quest.help_2, sfYellow);
}

void init_exclam(RPG_t *rpg)
{
    sfVector2f pos = {150, 70};
    sfVector2f size = {0.2, 0.2};

    rpg->quest.exclam_quest_txt =
    sfTexture_createFromFile("textures/characters/exclam_quest.png", NULL);
    rpg->quest.exclam_quest_spr = sfSprite_create();
    sfSprite_setTexture(rpg->quest.exclam_quest_spr,
    rpg->quest.exclam_quest_txt, sfTrue);
    sfSprite_setPosition(rpg->quest.exclam_quest_spr, pos);
    sfSprite_setScale(rpg->quest.exclam_quest_spr, size);
}

void talk_to_grandma(RPG_t *rpg, sfRenderWindow *wdw)
{
    if (rpg->quest.npc != GRANDMA && rpg->quest.help == 0)
        sfRenderWindow_drawSprite(wdw, rpg->quest.exclam_quest_spr, NULL);
    if (rpg->quest.npc == GRANDMA) {
        sfRenderWindow_drawRectangleShape(wdw, rpg->quest.rect_help, NULL);
        is_grandma(wdw, rpg);
    }
}
