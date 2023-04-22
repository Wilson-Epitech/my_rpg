/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** move_item
*/

#include "all_struct.h"
#include <stdbool.h>

sfVector2f get_mouse_position(RPG_t *rpg)
{
    sfVector2i mousePositionPixels = sfMouse_getPositionRenderWindow(rpg->window.wdw);
    sfVector2f click_pos = sfRenderWindow_mapPixelToCoords(rpg->window.wdw, mousePositionPixels, NULL);
    return click_pos;
}

static bool is_valid_click(sfVector2f click_pos)
{
    sfVector2i mousePosition = {(int) click_pos.x, (int) click_pos.y};
    if (mousePosition.x <= 547 && mousePosition.x >= 335
        && mousePosition.y <= 607 && mousePosition.y >= 287) {
        return true;
    }
    return false;
}

sfBool isDoubleClick(const sfEvent event)
{
    static sfClock* clock = NULL;
    static sfVector2i lastClickPos = {0, 0};

    clock = sfClock_create();
    if (event.type == sfEvtMouseButtonPressed && event.mouseButton.button == sfMouseLeft) {
        sfVector2i clickPos = {event.mouseButton.x, event.mouseButton.y};
        sfTime elapsed = sfClock_getElapsedTime(clock);
        sfInt32 elapsedTimeMs = sfTime_asMilliseconds(elapsed);
        if (clickPos.x == lastClickPos.x && clickPos.y == lastClickPos.y && elapsedTimeMs < 500) {
            return true;
        } else {
            lastClickPos = clickPos;
            sfClock_restart(clock);
            return false;
        }
    }
}

int move_items(RPG_t *rpg, sfEvent event)
{
    sfVector2f mousePosition;

    if (event.type == sfEvtMouseButtonPressed && rpg->menu.check_first_menu == 6) {
        if (event.mouseButton.button == sfMouseLeft) {
            mousePosition = get_mouse_position(rpg);
            if (is_on_button(rpg, rpg->item.item1)) {
                rpg->item.item_selected = rpg->item.item1;
                rpg->item.display = 1;
            }
            if (is_on_button(rpg, rpg->item.item2)) {
                rpg->item.item_selected = rpg->item.item2;
                rpg->item.display = 1;
            }
            if (rpg->item.item_in_hand == 1) {
                if (event.type == sfEvtMouseButtonPressed && event.mouseButton.button == sfMouseLeft) {
                    if (is_valid_click(mousePosition)) {
                        mousePosition = get_mouse_position(rpg);
                        mousePosition.x = mousePosition.x - 20;
                        mousePosition.y = mousePosition.y - 20;
                        sfSprite_setPosition(rpg->item.item_selected, mousePosition);
                        rpg->item.display = 0;
                        rpg->item.item_in_hand = 0;
                    } else {
                        // rpg->item.display = 0;
                        // rpg->item.item_in_hand = 0;
                        return 0;
                        }
                    }
                }
            if (isDoubleClick(event) && is_valid_click(mousePosition)) {
                if (is_on_button(rpg, rpg->item.item1))
                    rpg->item.display_item1 = 1;
                if (is_on_button(rpg, rpg->item.item2))
                    rpg->item.display_item2 = 1;
            }
        }
    }
    return 0;
}
