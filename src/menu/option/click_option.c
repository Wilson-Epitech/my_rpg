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
    if (is_on_button(menu, menu->button_option_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 3;
        }
    }
}
