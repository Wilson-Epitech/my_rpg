/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** move_item
*/

#include "all_struct.h"

static sfVector2f get_mouse_position(RPG_t *rpg)
{
    sfVector2i mousePositionPixels =
        sfMouse_getPositionRenderWindow(rpg->window.wdw);
    sfVector2f click_pos = sfRenderWindow_mapPixelToCoords
        (rpg->window.wdw, mousePositionPixels, NULL);
    return click_pos;
}

static void get_selected_item(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->item.item1)) {
        rpg->item.item_selected = rpg->item.item1;
        rpg->item.display = 1;
    }
    if (is_on_button(rpg, rpg->item.item2)) {
        rpg->item.item_selected = rpg->item.item2;
        rpg->item.display = 1;
    }
}

static void use_selected_item(RPG_t *rpg, sfEvent event,
    sfVector2f mousePosition)
{
    if (is_double_click(event) && is_valid_click(mousePosition)) {
        if (is_on_button(rpg, rpg->item.item1)
        && rpg->item.display_item1 != 1) {
            rpg->item.display_item1 = 1;
            rpg->player.def = rpg->player.def + 6;
        }
        if (is_on_button(rpg, rpg->item.item2)
        && rpg->item.display_item2 != 1) {
            rpg->item.display_item2 = 1;
            rpg->player.atk = rpg->player.atk + 11;
        }
    }
}

static int drop_item_in_hand(RPG_t *rpg, sfEvent event,
    sfVector2f mousePosition)
{
    if (rpg->item.item_in_hand == 1
    && event.type == sfEvtMouseButtonPressed
    && event.mouseButton.button == sfMouseLeft) {
        if (is_valid_click(mousePosition)) {
            mousePosition = get_mouse_position(rpg);
            mousePosition.x = mousePosition.x - 20;
            mousePosition.y = mousePosition.y - 20;
            sfSprite_setPosition(rpg->item.item_selected, mousePosition);
            rpg->item.display = 0;
            rpg->item.item_in_hand = 0;
        } else {
            return 0;
        }
        }
    return 0;
}

int move_items(RPG_t *rpg, sfEvent event)
{
    sfVector2f mousePosition;

    if (event.type == sfEvtMouseButtonPressed
        && rpg->menu.check_first_menu == 6
        && event.mouseButton.button == sfMouseLeft) {
            mousePosition = get_mouse_position(rpg);
            get_selected_item(rpg);
            drop_item_in_hand(rpg, event, mousePosition);
            use_selected_item(rpg, event, mousePosition);
    }
    return 0;
}
