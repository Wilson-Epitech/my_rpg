/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** click_option
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void option_click(menu_t *menu)
{
    if (menu->mouse_menu.x > 1400 && menu->mouse_menu.x < 1770
    && menu->mouse_menu.y > 250 && menu->mouse_menu.y < 350) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 3;
        }
    }
}
