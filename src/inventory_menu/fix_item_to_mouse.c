/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** fix_item_to_mouse
*/

#include "all_struct.h"

void fix_item_to_mouse(RPG_t *rpg)
{
    if (rpg->item.display == 1) {
        sfVector2i mousePositionPixels =
            sfMouse_getPositionRenderWindow(rpg->window.wdw);
        sfVector2f mousePosition = sfRenderWindow_mapPixelToCoords
            (rpg->window.wdw, mousePositionPixels, NULL);
        mousePosition.x = mousePosition.x - 20;
        mousePosition.y = mousePosition.y - 20;
        sfSprite_setPosition(rpg->item.item_selected, mousePosition);
        rpg->item.item_in_hand = 1;
    }
}
