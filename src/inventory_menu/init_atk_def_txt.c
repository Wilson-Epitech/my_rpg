/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_afk_def_txt
*/

#include "all_struct.h"

void init_inventory_txt(RPG_t *rpg)
{
    char *str_inven = "Inventory";
    sfVector2f pos_inv = {180, 190};

    rpg->inventory_menu.inventory = sfText_create();
    sfText_setFont(rpg->inventory_menu.inventory, rpg->menu.game_name_font);
    sfText_setString(rpg->inventory_menu.inventory, str_inven);
    sfText_setCharacterSize(rpg->inventory_menu.inventory, 40);
    sfText_setPosition(rpg->inventory_menu.inventory, pos_inv);
    sfText_setColor(rpg->inventory_menu.inventory, sfYellow);
}

void init_atk_txt(RPG_t *rpg)
{
    char *str_atk = my_int_to_str(rpg->player.atk);
    sfVector2f pos_atk = {900, 570};

    rpg->inventory_menu.atk = sfText_create();
    sfText_setFont(rpg->inventory_menu.atk, rpg->menu.game_number_font);
    sfText_setString(rpg->inventory_menu.atk, str_atk);
    sfText_setCharacterSize(rpg->inventory_menu.atk, 40);
    sfText_setPosition(rpg->inventory_menu.atk, pos_atk);
    sfText_setColor(rpg->inventory_menu.atk, sfYellow);
}

void init_def_txt(RPG_t *rpg)
{
    char *str_def = my_int_to_str(rpg->player.def);
    sfVector2f pos_def = {900, 645};

    rpg->inventory_menu.def = sfText_create();
    sfText_setFont(rpg->inventory_menu.def, rpg->menu.game_number_font);
    sfText_setString(rpg->inventory_menu.def, str_def);
    sfText_setCharacterSize(rpg->inventory_menu.def, 40);
    sfText_setPosition(rpg->inventory_menu.def, pos_def);
    sfText_setColor(rpg->inventory_menu.def, sfYellow);
}
