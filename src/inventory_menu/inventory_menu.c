/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** inventory_menu
*/

// #include "inventory_menu.h"
#include "all_struct.h"

void inventory_menu_func(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw, rpg->inventory_menu.menu, NULL);
}

int press_inventory(RPG_t *rpg, int menu_game)
{
    if (rpg->inventory_menu.keyI_pressed == 1) {
        menu_game = 0;
        rpg->inventory_menu.keyI_pressed = 0;
        return menu_game;
    } else if (rpg->inventory_menu.keyI_pressed == 0) {
        rpg->inventory_menu.keyI_pressed = 1;
        menu_game = 1;
        return menu_game;
    }
    return 0;
}

void draw_buttons_inventory(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->inventory_menu.button_saving, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.saving, NULL);
    hover_saving(rpg);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->inventory_menu.button_loading, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.loading, NULL);
    hover_loading(rpg);
    sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->inventory_menu.button_settings, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
        rpg->inventory_menu.settings, NULL);
    hover_settings(rpg);
}

void draw_inventory(RPG_t *rpg)
{
    if (sfMouse_isButtonPressed(0)) {
        inventory_menu_func(rpg);
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->inventory_menu.rect_char_menu, NULL);
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->inventory_menu.stat, NULL);
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->inventory_menu.health, NULL);
        sfRenderWindow_drawText(rpg->window.wdw, rpg->inventory_menu.xp, NULL);
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->inventory_menu.level, NULL);
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->inventory_menu.atk, NULL);
        sfRenderWindow_drawText(rpg->window.wdw,
            rpg->inventory_menu.def, NULL);
        draw_buttons_inventory(rpg);
    }
}
