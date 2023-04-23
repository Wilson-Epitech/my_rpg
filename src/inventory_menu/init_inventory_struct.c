/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_inventory_struct
*/

#include "all_struct.h"

void init_inventory_menu(RPG_t *rpg)
{
    rpg->inventory_menu.menu_texture = sfTexture_createFromFile
        ("textures/inventory_menu/inventory.png", NULL);
    rpg->inventory_menu.menu = sfSprite_create();
    sfSprite_setTexture(rpg->inventory_menu.menu,
    rpg->inventory_menu.menu_texture, sfFalse);
    sfSprite_setScale(rpg->inventory_menu.menu, (sfVector2f){1.5, 1.5});
    sfSprite_setPosition(rpg->inventory_menu.menu, (sfVector2f){50, 150});
    rpg->inventory_menu.keyI_pressed = 0;
    init_rect_characteristic(rpg);
    init_text_stat(rpg);
    init_health_txt(rpg);
    init_xp_txt(rpg);
    init_experience_bar(rpg);
    init_level_txt(rpg);
    init_def_txt(rpg);
    init_atk_txt(rpg);
    init_inventory_txt(rpg);
    init_inventory_item(rpg);
}
