/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include "all_struct.h"

static void event_wdw(sfRenderWindow *wdw, int check_black, RPG_t *rpg)
{
    sfEvent event;
    static int menu_game = 0;

    while (sfRenderWindow_pollEvent(wdw, &event)) {
        if (event.type == sfEvtClosed || rpg->menu.quit_nb == 1) {
            sfRenderWindow_close(wdw);
        }
        if (rpg->menu.check_first_menu == 6
        && check_black == 1 && menu_game != 1) {
            move_sprite(rpg);
            check_black = 1;
        }
        if (event.type == sfEvtKeyPressed &&
        sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue
        && rpg->menu.check_first_menu == 6) {
            menu_game = press_inventory(rpg, menu_game);
        }
    }
}

static void main_history(sfRenderWindow* wdw, RPG_t *rpg)
{
    if (rpg->history.anim_finished1 == 2) {
        motion_history(rpg);
        sfRenderWindow_drawSprite(wdw, rpg->history.sprite_history, NULL);
    }
    if (rpg->history.anim_finished2 == 2) {
        motion_history_end(rpg);
        sfRenderWindow_drawSprite(wdw, rpg->history.sprite_history_end, NULL);
    }
}

static void main_game(sfRenderWindow *wdw, RPG_t *rpg)
{
    int check_black = 1;

    if (rpg->menu.check_first_menu == 6) {
        rpg->map.mouse_img =
        sfRenderWindow_mapPixelToCoords(wdw, rpg->menu.mouse_menu, NULL);
        tp_all_maps(rpg);
        get_pos_char(rpg);
        check_black = col_which_map(rpg, check_black);
        event_wdw(wdw, check_black, rpg);
        draw_current_map(wdw, rpg);
        sfRenderWindow_drawSprite(wdw, rpg->struct_sprite.sprite, NULL);
        if (rpg->map.on_map == MAP1)
            sfRenderWindow_drawSprite(wdw, rpg->map.map1_3d_spr, NULL);
        sfRenderWindow_drawRectangleShape(wdw,
        rpg->quest.rect_current_quest, NULL);
        draw_current_text(wdw, rpg);
        draw_inventory(wdw, rpg);
    }
}

static void main_menu(sfRenderWindow *wdw, RPG_t *rpg)
{
    get_mouse_pos_menu(wdw, rpg);
    motion_menu_bk(rpg);
    if (rpg->menu.check_first_menu < 6) {
        main_history(wdw, rpg);
        if (rpg->menu.check_first_menu < 5)
            sfRenderWindow_drawSprite(wdw, rpg->menu.bk_menu_img_sprite, NULL);
        menu_first_page(wdw, rpg);
        menu_snd_page(wdw, rpg);
        menu_option_page(wdw, rpg);
        credit_page(wdw, rpg);
        click_first_menu(rpg);
        check_history(rpg);
        click_history(rpg);
    }
}

void open_wdw(RPG_t *rpg)
{
    sfRenderWindow *wdw;
    sfVideoMode mode = {1920, 1080, 32};
    wdw =
    sfRenderWindow_create(mode, "Dragon's Burden", sfResize | sfClose, NULL);
    load_menu(wdw, rpg);
    load_history(rpg);
    init_maps(rpg);
    init_map1_3d(rpg);
    init_quest(rpg);
    init_inventory_menu(rpg);
    int check_black = 0;
    while (sfRenderWindow_isOpen(wdw)) {
        sfRenderWindow_clear(wdw, sfBlack);
        main_menu(wdw, rpg);
        main_game(wdw, rpg);
        event_wdw(wdw, check_black, rpg);
        sfRenderWindow_display(wdw);
    }
    destroy_all(rpg);
    sfRenderWindow_destroy(wdw);
}
