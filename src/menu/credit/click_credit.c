/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_credit
*/


#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void credit_click(menu_t *menu)
{
    if (menu->mouse_menu.x > 825 && menu->mouse_menu.x < 1170
    && menu->mouse_menu.y > 750 && menu->mouse_menu.y < 850) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 4;
        }
    }
}
