/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** button saving
*/

#include "all_struct.h"

void init_button_saving(RPG_t *rpg)
{
    sfVector2f pos = {1275, 160};
    sfVector2f scale = {0.9, 0.9};

    rpg->inventory_menu.button_saving = sfSprite_create();
    sfSprite_setTexture(rpg->inventory_menu.button_saving,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->inventory_menu.button_saving, scale);
    sfSprite_setPosition(rpg->inventory_menu.button_saving, pos);
    return;
}

void init_txt_saving(RPG_t *rpg)
{
    sfVector2f pos = {1370, 225};

    rpg->inventory_menu.saving = sfText_create();
    sfText_setFont(rpg->inventory_menu.saving, rpg->menu.game_name_font);
    sfText_setString(rpg->inventory_menu.saving, "Saving");
    sfText_setCharacterSize(rpg->inventory_menu.saving, 45);
    sfText_setPosition(rpg->inventory_menu.saving, pos);
    sfText_setColor(rpg->inventory_menu.saving, sfBlack);
}

void hover_saving(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->inventory_menu.button_saving)) {
        sfText_setColor(rpg->inventory_menu.saving, sfRed);
        if (sfMouse_isButtonPressed(0)) {
            stock_in_config_file(rpg, rpg->struct_sprite.sprite,
            rpg->map.on_map);
            sfMusic_play(rpg->menu.save_sound);
            sfMusic_play(rpg->menu.save_sound);
        }
    } else {
        sfText_setColor(rpg->inventory_menu.saving, sfBlack);
    }
}
