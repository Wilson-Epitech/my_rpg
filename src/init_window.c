/*
** MY_RPG PROJECT, 2023
** struct_all
** File description:
** init_window
*/

#include "all_struct.h"

void init_window(RPG_t *rpg)
{
    rpg->window.mode.width = 1920;
    rpg->window.mode.height = 1080;
    rpg->window.mode.bitsPerPixel = 32;
    rpg->window.wdw =
    sfRenderWindow_create(rpg->window.mode,
        "Dragon's Burden", sfResize | sfClose, NULL);
}
