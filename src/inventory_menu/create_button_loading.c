/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** button loading
*/

#include "all_struct.h"

void init_button_loading(RPG_t *rpg)
{
    sfVector2f pos = {1275, 397};
    sfVector2f scale = {0.9, 0.9};

    rpg->inventory_menu.button_loading = sfSprite_create();
    sfSprite_setTexture(rpg->inventory_menu.button_loading,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->inventory_menu.button_loading, scale);
    sfSprite_setPosition(rpg->inventory_menu.button_loading, pos);
    return;
}

void init_txt_loading(RPG_t *rpg)
{
    sfVector2f pos = {1328, 460};

    rpg->inventory_menu.loading = sfText_create();
    sfText_setFont(rpg->inventory_menu.loading, rpg->menu.game_name_font);
    sfText_setString(rpg->inventory_menu.loading, "Loading");
    sfText_setCharacterSize(rpg->inventory_menu.loading, 45);
    sfText_setPosition(rpg->inventory_menu.loading, pos);
    sfText_setColor(rpg->inventory_menu.loading, sfBlack);
}

void hover_loading(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->inventory_menu.button_loading)) {
        sfText_setColor(rpg->inventory_menu.loading, sfRed);
        if (sfMouse_isButtonPressed(0)) {
            parse_config_file(rpg);
            sfSprite_setPosition(rpg->struct_sprite.sprite,
            rpg->player.set_player_pos);
        }
    } else {
        sfText_setColor(rpg->inventory_menu.loading, sfBlack);
    }
}
