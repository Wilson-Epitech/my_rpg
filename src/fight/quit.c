/*
** MY_RPG PROJECT, 2023
** rpg_d
** File description:
** quit
*/

#include "all_struct.h"

void quit_fight(RPG_t *rpg)
{
    sfVector2f scale = {1, 1};
    sfVector2f pos_txt = {850, 815};
    sfVector2f pos = {750, 750};
    sfText_setPosition(rpg->menu.quit, pos_txt);
    sfSprite_setPosition(rpg->menu.button_quit_spr, pos);
    sfSprite_setScale(rpg->menu.button_quit_spr, scale);
    sfText_setCharacterSize(rpg->menu.quit, 65);
    sfRenderWindow_drawSprite(rpg->window.wdw,
    rpg->menu.button_quit_spr, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
    rpg->menu.quit, NULL);
    hover_quit(rpg);
    click_quit(rpg);
}
