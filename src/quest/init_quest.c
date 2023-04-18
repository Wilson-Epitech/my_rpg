/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_quest
*/

#include "menu.h"
#include "maps.h"
#include "sprite.h"
#include "quest.h"

void init_quest(StructSprite *struct_sprite,
quest_t *quest, menu_t *menu, maps_t *map)
{
    init_struct_sprite(struct_sprite);
    init_grandma_sprite(struct_sprite);
    init_shaolin_sprite(struct_sprite);
    init_help_rect(quest);
    init_text_help(quest, menu);
    init_text_help2(quest, menu);
    init_text_main_quest(quest, menu);
    init_text_main_quest2(quest, menu);
    init_exclam(quest);
    init_rect_current_quest(quest);
    init_text_talk_grand(quest, menu);
    init_text_talk_shao(quest, menu);
    init_text_dragon(quest, menu);
    map->view_combat = sfView_create();
    map->dezoom = 1;
}
