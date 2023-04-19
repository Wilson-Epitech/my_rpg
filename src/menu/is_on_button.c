/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** is_on_button
*/

#include "all_struct.h"

sfBool is_on_button(RPG_t *rpg, sfSprite *sprite)
{
    sfFloatRect button_menu = sfSprite_getGlobalBounds(sprite);
    return sfFloatRect_contains(&button_menu,
    rpg->menu.mouse_menu.x, rpg->menu.mouse_menu.y);
}
