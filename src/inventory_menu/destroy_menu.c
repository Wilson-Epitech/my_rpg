/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy_menu
*/

#include "all_struct.h"
#include "inventory_menu.h"

void destroy_inventory_menu(RPG_t *rpg)
{
    sfSprite_destroy(rpg->inventory_menu.menu);
    sfTexture_destroy(rpg->inventory_menu.menu_texture);
}
