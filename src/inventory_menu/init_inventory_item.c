/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** init_inventory_item
*/

#include "all_struct.h"

void init_inventory_item(RPG_t *rpg)
{
    rpg->item.item_selected = NULL;
    rpg->item.item1_texture = sfTexture_createFromFile("textures/inventory_menu/item1.png", NULL);
    rpg->item.item2_texture = sfTexture_createFromFile("textures/inventory_menu/item2.png", NULL);
    rpg->item.rect_case = sfRectangleShape_create();
    sfVector2f size = {50.f, 50.f};
    sfRectangleShape_setSize(rpg->item.rect_case, size);
    sfRectangleShape_setFillColor(rpg->item.rect_case, sfRed);
    rpg->item.display = 0;
    rpg->item.display_item1 = 0;
    rpg->item.display_item2 = 0;
    rpg->item.item1_old_pos.x = 0;
    rpg->item.item1_old_pos.y = 0;
    rpg->item.item2_old_pos.x = 0;
    rpg->item.item2_old_pos.y = 0;
    rpg->item.item_in_hand = 0;
    rpg->item.item1 = sfSprite_create();
    sfSprite_setTexture(rpg->item.item1, rpg->item.item1_texture, sfTrue);
    rpg->item.item2 = sfSprite_create();
    sfSprite_setTexture(rpg->item.item2, rpg->item.item2_texture, sfTrue);
    sfSprite_setPosition(rpg->item.item1, (sfVector2f){388, 396});
    sfSprite_setPosition(rpg->item.item2, (sfVector2f){330, 288});
    sfVector2f item_scale = {0.2, 0.2};
    sfSprite_setScale(rpg->item.item1, item_scale);
    sfSprite_setScale(rpg->item.item2, item_scale);
}
