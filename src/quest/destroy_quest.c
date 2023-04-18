/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_quest
*/

#include "sprite.h"
#include "quest.h"

void destroy_quest(StructSprite *struct_sprite, quest_t *quest)
{
    sfSprite_destroy(struct_sprite->grandma_spt);
    sfSprite_destroy(struct_sprite->shaolin_spt);
    sfSprite_destroy(struct_sprite->sprite);
    sfTexture_destroy(struct_sprite->grandma_txt);
    sfTexture_destroy(struct_sprite->shaolin_txt);
    sfTexture_destroy(struct_sprite->texture_sprite);
    sfRectangleShape_destroy(quest->rect_help);
    sfRectangleShape_destroy(quest->rect_current_quest);
    sfText_destroy(quest->help_1);
    sfText_destroy(quest->help_2);
    sfText_destroy(quest->main_quest_1);
    sfText_destroy(quest->main_quest_2);
    sfText_destroy(quest->current_quest_shaolin);
    sfText_destroy(quest->current_quest_grandma);
    sfText_destroy(quest->current_quest_dragon);
}
