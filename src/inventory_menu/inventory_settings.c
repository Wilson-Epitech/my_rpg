/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** inventory_settings
*/

#include "all_struct.h"

void draw_rect_setting_game(RPG_t *rpg)
{
    sfVector2f pos = {0, 0};
    sfVector2f size = {1920, 1080};

    rpg->inventory_menu.rect_setting = sfRectangleShape_create();
    sfRectangleShape_setSize(rpg->inventory_menu.rect_setting, size);
    sfRectangleShape_setPosition(rpg->inventory_menu.rect_setting, pos);
    sfRectangleShape_setFillColor(rpg->inventory_menu.rect_setting,
    sfColor_fromRGBA(80, 80, 80, 200));
    sfRectangleShape_setOutlineColor(rpg->inventory_menu.rect_setting, sfYellow);
    sfRectangleShape_setOutlineThickness(rpg->inventory_menu.rect_setting, 10);
}
