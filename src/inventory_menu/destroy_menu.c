/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_menu
*/

#include "all_struct.h"

void destroy_inventory_menu(RPG_t *rpg)
{
    sfSprite_destroy(rpg->inventory_menu.menu);
    sfSprite_destroy(rpg->inventory_menu.button_saving);
    sfSprite_destroy(rpg->inventory_menu.button_loading);
    sfSprite_destroy(rpg->inventory_menu.button_settings);
    sfTexture_destroy(rpg->inventory_menu.menu_texture);
    sfRectangleShape_destroy(rpg->inventory_menu.rect_char_menu);
    sfText_destroy(rpg->inventory_menu.stat);
    sfText_destroy(rpg->inventory_menu.saving);
    sfText_destroy(rpg->inventory_menu.loading);
    sfText_destroy(rpg->inventory_menu.settings);
    sfText_destroy(rpg->inventory_menu.health);
    sfText_destroy(rpg->inventory_menu.xp);
    sfText_destroy(rpg->inventory_menu.level);
}
