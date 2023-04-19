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
#include "quest.h"

static void event_wdw(sfRenderWindow *wdw, menu_t *menu,
StructSprite *struct_sprite, int check_black)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(wdw, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(wdw);
        }
        if (menu->check_first_menu == 6 && check_black == 1) {
            move_sprite(struct_sprite);
            check_black = 1;
        }
    }
}

static void main_history(sfRenderWindow* wdw, history_t *history)
{
    if (history->anim_finished1 == 2) {
        motion_history(history);
        sfRenderWindow_drawSprite(wdw, history->sprite_history, NULL);
    }
    if (history->anim_finished2 == 2) {
        motion_history_end(history);
        sfRenderWindow_drawSprite(wdw, history->sprite_history_end, NULL);
    }
}

static void main_game(sfRenderWindow *wdw, menu_t *menu,
maps_t *map, StructSprite *struct_sprite, quest_t *quest)
{
    int check_black = 1;

    if (menu->check_first_menu == 6) {
        map->mouse_img =
        sfRenderWindow_mapPixelToCoords(wdw,menu->mouse_menu, NULL);
        tp_all_maps(map, struct_sprite);
        get_pos_char(struct_sprite);
        check_black = col_which_map(map, struct_sprite, check_black);
        event_wdw(wdw, menu, struct_sprite, check_black);
        draw_current_map(wdw, map, struct_sprite, quest, menu);
        sfRenderWindow_drawSprite(wdw, struct_sprite->sprite, NULL);
        sfRenderWindow_drawRectangleShape(wdw, quest->rect_current_quest, NULL);
        if (quest->main_quest == 0)
            sfRenderWindow_drawText(wdw, quest->current_quest_grandma, NULL);
        if (quest->main_quest == 1)
            sfRenderWindow_drawText(wdw, quest->current_quest_shaolin, NULL);
        if (quest->main_quest == 2)
            sfRenderWindow_drawText(wdw, quest->current_quest_dragon, NULL);
    }
}

static void main_menu(sfRenderWindow *wdw, menu_t *menu, history_t *history)
{
    get_mouse_pos_menu(wdw, menu);
    motion_menu_bk(menu);
    if (menu->check_first_menu < 6) {
        main_history(wdw, history);
        if (menu->check_first_menu < 5)
            sfRenderWindow_drawSprite(wdw, menu->bk_menu_img_sprite, NULL);
        menu_first_page(wdw, menu);
        menu_snd_page(wdw, menu);
        menu_option_page(wdw, menu);
        credit_page(wdw, menu);
        click_first_menu(menu);
        check_history(history, menu);
        click_history(history, menu);
    }
}

void open_wdw(history_t *history, menu_t *menu, maps_t *map,
StructSprite *struct_sprite, quest_t *quest)
{
    sfRenderWindow *wdw;
    sfVideoMode mode = {1920, 1080, 32};
    wdw =
    sfRenderWindow_create(mode, "Dragon's Burden", sfResize | sfClose, NULL);
    menu->volume = 100.0;
    load_menu(history, menu);
    load_history(history);
    init_maps(map);
    init_quest(struct_sprite, quest, menu, map);
    int check_black = 0;
    while (sfRenderWindow_isOpen(wdw)) {
        sfRenderWindow_clear(wdw, sfBlack);
        main_menu(wdw, menu, history);
        main_game(wdw, menu, map, struct_sprite, quest);
        event_wdw(wdw, menu, struct_sprite, check_black);
        sfRenderWindow_display(wdw);
    }
    destroy_all(history, menu, map, struct_sprite, quest);
    sfRenderWindow_destroy(wdw);
}
