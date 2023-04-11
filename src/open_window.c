/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void event_wdw(sfRenderWindow *wdw)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(wdw, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(wdw);
        }
    }
}

void main_program(sfRenderWindow *wdw, menu_t *menu)
{
    sfRenderWindow_clear(wdw, sfBlack);
    get_mouse_pos_menu(wdw, menu);
    motion_menu_bk(menu);
    sfRenderWindow_drawSprite(wdw, menu->bk_menu_img_sprite, NULL);
    menu_first_page(wdw, menu);
    menu_snd_page(wdw, menu);
    menu_option_page(wdw, menu);
    credit_page(wdw, menu);
    sfRenderWindow_display(wdw);
    click_first_menu(menu);
    event_wdw(wdw);
}

void open_wdw(menu_t *menu)
{
    sfRenderWindow *wdw;
    sfVideoMode mode = {1920, 1080, 32};
    wdw =
    sfRenderWindow_create(mode, "Dragon's Burden", sfResize | sfClose, NULL);
    menu->volume = 100.0;
    load_menu(menu);

    while (sfRenderWindow_isOpen(wdw)) {
        main_program(wdw, menu);
    }
    destroy_menu(menu, wdw);
}
