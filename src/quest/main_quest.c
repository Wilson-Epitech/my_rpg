/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main_quest
*/

#include "all_struct.h"

void init_text_main_quest(RPG_t *rpg)
{
    sfVector2f pos = {1000, 50};

    char *str = "\n\nYOU\n\nPlease  help  me\n\n\n Of  course  you  know  of  "
    "the  terrible  dragon\n Can  you  please  find  his  cave\n Someone  need"
    "   to  stop  him  from  hurting  more  people\n";
    rpg->quest.main_quest_1 = sfText_create();
    sfText_setFont(rpg->quest.main_quest_1, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.main_quest_1, str);
    sfText_setCharacterSize(rpg->quest.main_quest_1, 20);
    sfText_setPosition(rpg->quest.main_quest_1, pos);
    sfText_setColor(rpg->quest.main_quest_1, sfYellow);
}

void init_text_main_quest2(RPG_t *rpg)
{
    sfVector2f pos = {1000, 50};

    char *str = "\n\n Once  you  get  to  him\n\n Please  free  him  of  the"
    "  black  force  that  is\n making  him  violent\n\n He  is  "
    "a menace to  all  our  lives  like  this\n";
    rpg->quest.main_quest_2 = sfText_create();
    sfText_setFont(rpg->quest.main_quest_2, rpg->menu.game_name_font);
    sfText_setString(rpg->quest.main_quest_2, str);
    sfText_setCharacterSize(rpg->quest.main_quest_2, 20);
    sfText_setPosition(rpg->quest.main_quest_2, pos);
    sfText_setColor(rpg->quest.main_quest_2, sfYellow);
}

void talk_to_shaolin(RPG_t *rpg, sfRenderWindow *wdw)
{
    sfVector2f size = {800, 300};
    sfVector2f pos_rect = {1000, 50};
    sfVector2f pos_excla = {740, 275};

    if (rpg->quest.npc != SHAOLIN && rpg->quest.main_quest == 1) {
        sfSprite_setPosition(rpg->quest.exclam_quest_spr, pos_excla);
        sfRenderWindow_drawSprite(wdw, rpg->quest.exclam_quest_spr, NULL);
    }
    if (rpg->quest.npc == SHAOLIN && rpg->quest.main_quest > 0) {
        sfRectangleShape_setSize(rpg->quest.rect_help, size);
        sfRectangleShape_setPosition(rpg->quest.rect_help, pos_rect);
        sfRenderWindow_drawRectangleShape(wdw, rpg->quest.rect_help, NULL);
        if (rpg->quest.main_quest == 1) {
            sfRenderWindow_drawText(wdw, rpg->quest.main_quest_1, NULL);
            press_enter_main(rpg);
        }
        if (rpg->quest.main_quest == 2)
            sfRenderWindow_drawText(wdw, rpg->quest.main_quest_2, NULL);
    }
}
