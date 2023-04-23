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

void init_experience_bar(RPG_t *rpg)
{
    float xpbar_size = (float) rpg->player.xp / rpg->player.level_xp;
    sfVector2f size_xpbar = {350 * xpbar_size, 7};
    sfVector2f size_xpfullbar = {350, 7};
    sfVector2f pos_xpbar = {625, 320};

    rpg->inventory_menu.xp_bar = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rpg->inventory_menu.xp_bar,
    sfColor_fromRGB(255, 233, 0));
    sfRectangleShape_setOutlineThickness(rpg->inventory_menu.xp_bar, 2);
    sfRectangleShape_setOutlineColor(rpg->inventory_menu.xp_bar, sfWhite);
    sfRectangleShape_setSize(rpg->inventory_menu.xp_bar, size_xpbar);
    sfRectangleShape_setPosition(rpg->inventory_menu.xp_bar, pos_xpbar);

    rpg->inventory_menu.xp_fullbar = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rpg->inventory_menu.xp_fullbar, sfWhite);
    sfRectangleShape_setOutlineThickness(rpg->inventory_menu.xp_fullbar, 2);
    sfRectangleShape_setOutlineColor(rpg->inventory_menu.xp_fullbar, sfWhite);
    sfRectangleShape_setSize(rpg->inventory_menu.xp_fullbar, size_xpfullbar);
    sfRectangleShape_setPosition(rpg->inventory_menu.xp_fullbar, pos_xpbar);
}
