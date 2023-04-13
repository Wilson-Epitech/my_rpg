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
#include "maps.h"

void event_wdw(sfRenderWindow *wdw)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(wdw, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(wdw);
        }
    }
}

int init_maps(maps_t *map)
{
    sfVector2f scale = {1, 1};

    map->map1_txr = sfTexture_createFromFile("textures/maps/map1.png",NULL);
    map->map1_spr = sfSprite_create();
    sfSprite_setTexture(map->map1_spr, map->map1_txr, sfTrue);
    sfSprite_setScale(map->map1_spr, scale);
}

void main_menu(sfRenderWindow *wdw, menu_t *menu, maps_t *map)
{
    get_mouse_pos_menu(wdw, menu);
    motion_menu_bk(menu);
    if (menu->check_first_menu < 5)
        sfRenderWindow_drawSprite(wdw, menu->bk_menu_img_sprite, NULL);
        menu_first_page(wdw, menu);
        menu_snd_page(wdw, menu);
        menu_option_page(wdw, menu);
        credit_page(wdw, menu);
        click_first_menu(menu);
    if (menu->check_first_menu == 5) {
        sfRenderWindow_drawSprite(wdw, map->map1_spr, NULL);
    }
}

void open_wdw(menu_t *menu, maps_t *map)
{
    int play_check = 0;
    sfRenderWindow *wdw;
    sfVideoMode mode = {1920, 1080, 32};
    wdw =
    sfRenderWindow_create(mode, "Dragon's Burden", sfResize | sfClose, NULL);
    menu->volume = 100.0;
    load_menu(menu);
    init_maps(map);

    while (sfRenderWindow_isOpen(wdw)) {
        sfRenderWindow_clear(wdw, sfBlack);
        main_menu(wdw, menu, map);
        sfRenderWindow_display(wdw);
        event_wdw(wdw);
    }
    destroy_menu(menu);
    sfSprite_destroy(map->map1_spr);
    sfTexture_destroy(map->map1_txr);
    sfImage_destroy(map->map1);
    sfRenderWindow_destroy(wdw);
}
