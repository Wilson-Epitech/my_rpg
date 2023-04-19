/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** inventory_menu
*/

#include "inventory_menu.h"

void inventory_menu_func(sfRenderWindow *wdw, InventoryMenu_t *inventory_menu)
{
    sfRenderWindow_drawSprite(wdw, inventory_menu->menu, NULL);
}
