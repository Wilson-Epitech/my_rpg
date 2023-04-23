/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_menu
*/

#include "all_struct.h"

void destroy_inventory_item(RPG_t *rpg)
{
    sfSprite_destroy(rpg->item.item1);
    sfSprite_destroy(rpg->item.item2);
    sfTexture_destroy(rpg->item.item1_texture);
    sfTexture_destroy(rpg->item.item2_texture);
    sfRectangleShape_destroy(rpg->item.rect_case);
    sfClock_destroy(rpg->item.clock);
}

void destroy_inventory_menu(RPG_t *rpg)
{
    sfTexture_destroy(rpg->inventory_menu.menu_texture);
    sfSprite_destroy(rpg->inventory_menu.menu);
    sfRectangleShape_destroy(rpg->inventory_menu.rect_char_menu);
    sfRectangleShape_destroy(rpg->inventory_menu.rect_setting);
    sfText_destroy(rpg->inventory_menu.inventory);
    sfText_destroy(rpg->inventory_menu.stat);
    sfText_destroy(rpg->inventory_menu.health);
    sfText_destroy(rpg->inventory_menu.xp);
    sfRectangleShape_destroy(rpg->inventory_menu.xp_fullbar);
    sfRectangleShape_destroy(rpg->inventory_menu.xp_bar);
    sfText_destroy(rpg->inventory_menu.atk);
    sfText_destroy(rpg->inventory_menu.def);
    sfText_destroy(rpg->inventory_menu.level);
    sfSprite_destroy(rpg->inventory_menu.button_saving);
    sfText_destroy(rpg->inventory_menu.saving);
    sfSprite_destroy(rpg->inventory_menu.button_loading);
    sfText_destroy(rpg->inventory_menu.loading);
    sfSprite_destroy(rpg->inventory_menu.button_settings);
    sfText_destroy(rpg->inventory_menu.settings);
}

