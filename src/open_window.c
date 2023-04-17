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
#include "sprite.h"

static void event_wdw(sfRenderWindow *wdw, menu_t *menu,
StructSprite *struct_sprite, int check_black)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(wdw, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(wdw);
        }
        if (menu->check_first_menu == 5 && check_black == 1) {
            move_sprite(struct_sprite);
            check_black = 1;
        }
    }
}

static void main_game(sfRenderWindow *wdw, menu_t *menu,
maps_t *map, StructSprite *struct_sprite)
{
    int check_black = 1;

    if (menu->check_first_menu == 5) {
        map->mouse_img =
        sfRenderWindow_mapPixelToCoords(wdw,menu->mouse_menu, NULL);
        tp_all_maps(map, struct_sprite);
        get_pos_char(struct_sprite);
        check_black = col_which_map(map, struct_sprite, check_black);
        event_wdw(wdw, menu, struct_sprite, check_black);
        draw_current_map(wdw, map, struct_sprite);
        sfRenderWindow_drawSprite(wdw, struct_sprite->sprite, NULL);
    }
}

static void main_menu(sfRenderWindow *wdw, menu_t *menu)
{
    get_mouse_pos_menu(wdw, menu);
    motion_menu_bk(menu);
    if (menu->check_first_menu < 5) {
        sfRenderWindow_drawSprite(wdw, menu->bk_menu_img_sprite, NULL);
        menu_first_page(wdw, menu);
        menu_snd_page(wdw, menu);
        menu_option_page(wdw, menu);
        credit_page(wdw, menu);
        click_first_menu(menu);
    }
}

void open_wdw(menu_t *menu, maps_t *map, StructSprite *struct_sprite)
{
    sfRenderWindow *wdw;
    sfVideoMode mode = {1920, 1080, 32};
    wdw =
    sfRenderWindow_create(mode, "Dragon's Burden", sfResize | sfClose, NULL);
    menu->volume = 100.0;
    load_menu(menu);
    init_maps(map);
    init_struct_sprite(struct_sprite);
    int check_black = 0;

    while (sfRenderWindow_isOpen(wdw)) {
        sfRenderWindow_clear(wdw, sfBlack);
        main_menu(wdw, menu);
        main_game(wdw, menu, map, struct_sprite);
        event_wdw(wdw, menu, struct_sprite, check_black);
        sfRenderWindow_display(wdw);
    }
    destroy_menu(menu);
    destroy_maps(map);
    sfRenderWindow_destroy(wdw);
}
