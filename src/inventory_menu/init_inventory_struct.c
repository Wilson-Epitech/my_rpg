/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_inventory_struct
*/

#include "inventory_menu.h"

void init_inventory_menu(InventoryMenu_t *inventory_menu)
{
    inventory_menu->menu_texture = sfTexture_createFromFile
        ("textures/inventory_menu/inventory.png", NULL);
    inventory_menu->menu = sfSprite_create();
    sfSprite_setTexture(inventory_menu->menu, inventory_menu->menu_texture, sfFalse);
    sfSprite_setScale(inventory_menu->menu, (sfVector2f){1.5, 1.5});
    sfSprite_setPosition(inventory_menu->menu, (sfVector2f){50, 150});
    inventory_menu->keyI_pressed = 0;
}
