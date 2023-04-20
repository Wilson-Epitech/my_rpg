/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** button settings
*/

#include "all_struct.h"

void init_button_settings(RPG_t *rpg)
{
    sfVector2f pos = {1275, 645 };
    sfVector2f scale = {0.9, 0.9};

    rpg->inventory_menu.button_settings = sfSprite_create();
    sfSprite_setTexture(rpg->inventory_menu.button_settings,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->inventory_menu.button_settings, scale);
    sfSprite_setPosition(rpg->inventory_menu.button_settings, pos);
    return;
}

void init_txt_settings(RPG_t *rpg)
{
    sfVector2f pos = {1335, 715};

    rpg->inventory_menu.settings = sfText_create();
    sfText_setFont(rpg->inventory_menu.settings, rpg->menu.game_name_font);
    sfText_setString(rpg->inventory_menu.settings, "Settings");
    sfText_setCharacterSize(rpg->inventory_menu.settings, 45);
    sfText_setPosition(rpg->inventory_menu.settings, pos);
    sfText_setColor(rpg->inventory_menu.settings, sfBlack);
}

void hover_settings(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->inventory_menu.button_settings)) {
        sfText_setColor(rpg->inventory_menu.settings, sfRed);
    } else {
        sfText_setColor(rpg->inventory_menu.settings, sfBlack);
    }
}
