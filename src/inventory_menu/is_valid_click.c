/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** is_valid_click
*/

#include "all_struct.h"
#include <stdbool.h>

bool is_valid_click(sfVector2f click_pos)
{
    sfVector2i mousePosition = {(int) click_pos.x, (int) click_pos.y};
    if (mousePosition.x <= 547 && mousePosition.x >= 335
        && mousePosition.y <= 607 && mousePosition.y >= 287) {
        return true;
    }
    return false;
}
