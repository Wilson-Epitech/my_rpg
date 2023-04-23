/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_quest
*/

#include "all_struct.h"

static void destroy_txt_quest(RPG_t *rpg)
{
    sfText_destroy(rpg->quest.help_1);
    sfText_destroy(rpg->quest.help_2);
    sfText_destroy(rpg->quest.main_quest_1);
    sfText_destroy(rpg->quest.main_quest_2);
    sfText_destroy(rpg->quest.current_quest_shaolin);
    sfText_destroy(rpg->quest.current_quest_grandma);
    sfText_destroy(rpg->quest.current_quest_dragon);
}

void destroy_quest(RPG_t *rpg)
{
    sfSprite_destroy(rpg->struct_sprite.grandma_spt);
    sfSprite_destroy(rpg->struct_sprite.shaolin_spt);
    sfSprite_destroy(rpg->struct_sprite.sprite);
    sfTexture_destroy(rpg->struct_sprite.grandma_txt);
    sfTexture_destroy(rpg->struct_sprite.shaolin_txt);
    sfTexture_destroy(rpg->struct_sprite.texture_sprite);
    sfRectangleShape_destroy(rpg->quest.rect_help);
    sfRectangleShape_destroy(rpg->quest.rect_current_quest);
    destroy_txt_quest(rpg);
}
