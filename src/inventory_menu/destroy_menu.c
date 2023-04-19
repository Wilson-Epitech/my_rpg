/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_menu
*/

#include "inventory_menu.h"

void destroy_inventory_menu(InventoryMenu_t *inventory_menu)
{
    sfSprite_destroy(inventory_menu->menu);
    sfTexture_destroy(inventory_menu->menu_texture);
}