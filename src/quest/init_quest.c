/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_quest
*/

#include "all_struct.h"

void init_quest(RPG_t *rpg)
{
    rpg->menu.volume = 100.0;
    rpg->player.def = 13;
    rpg->player.atk = 47;
    rpg->player.hp = 200;
    init_struct_sprite(rpg);
    init_grandma_sprite(rpg);
    init_shaolin_sprite(rpg);
    init_help_rect(rpg);
    init_text_help(rpg);
    init_text_help2(rpg);
    init_text_main_quest(rpg);
    init_text_main_quest2(rpg);
    init_exclam(rpg);
    init_rect_current_quest(rpg);
    init_text_talk_grand(rpg);
    init_text_talk_shao(rpg);
    init_text_dragon(rpg);
    rpg->map.view_combat = sfView_create();
    rpg->map.dezoom = 1;
}
