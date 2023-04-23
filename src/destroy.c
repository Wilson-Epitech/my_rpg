/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy
*/

#include "all_struct.h"

void destroy_all(RPG_t *rpg)
{
    destroy_history(rpg);
    destroy_menu(rpg);
    destroy_maps(rpg);
    destroy_sprites_maps(rpg);
    destroy_quest(rpg);
    destroy_inventory_menu(rpg);
    destroy_inventory_item(rpg);
    destroy_fight(rpg);
}
