/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include "all_struct.h"

static void event_wdw(int check_black, RPG_t *rpg)
{
    sfEvent event;
    static int menu_game = 0;

    while (sfRenderWindow_pollEvent(rpg->window.wdw, &event)) {
        if (event.type == sfEvtClosed || rpg->menu.quit_nb == 1) {
            sfRenderWindow_close(rpg->window.wdw);
        }
        if (rpg->menu.check_first_menu == 6
        && check_black == 1 && menu_game != 1
        && menu_game != 2) {
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

static void main_history(RPG_t *rpg)
{
    if (rpg->history.anim_finished1 == 9) {
        motion_history(rpg);
        sfRenderWindow_drawSprite(rpg->window.wdw,
            rpg->history.sprite_history, NULL);
    }
    if (rpg->history.anim_finished1 == 2) {
        motion_history_end(rpg);
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->history.sprite_history_end, NULL);
    }
}

static void main_game(RPG_t *rpg)
{
    int check_black = 1;
    if (rpg->menu.check_first_menu == 6) {
        rpg->map.mouse_img =
        sfRenderWindow_mapPixelToCoords(rpg->window.wdw,
            rpg->menu.mouse_menu, NULL);
        tp_all_maps(rpg);
        get_pos_char(rpg);
        check_black = col_which_map(rpg, check_black);
        event_wdw(check_black, rpg);
        draw_current_map(rpg);
        sfRenderWindow_drawSprite(rpg->window.wdw,
            rpg->struct_sprite.sprite, NULL);
        if (rpg->map.on_map == MAP1) {
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.bush_lt, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.bush_ld, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.bush_rt, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.bush_rd, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.well_map1, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.roof_1_map1, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.roof_2_map1, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.roof_3_map1, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.big_house_map1, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.tent_map1, NULL);
        }
        if (rpg->map.on_map == MAP2) {
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.tent_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.tree_top_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.tree_bot_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.green_house_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.red_house_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.honey_house_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.medical_house_map2, NULL);
            sfRenderWindow_drawSprite(rpg->window.wdw, rpg->dimension.asian_house_map2, NULL);
        }
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->quest.rect_current_quest, NULL);
        draw_current_text(rpg);
        draw_inventory(rpg);
    }
}

static void main_menu(RPG_t *rpg)
{
    get_mouse_pos_menu(rpg);
    motion_menu_bk(rpg);
    if (rpg->menu.check_first_menu < 6) {
        main_history(rpg);
        if (rpg->menu.check_first_menu < 5)
            sfRenderWindow_drawSprite(rpg->window.wdw,
                rpg->menu.bk_menu_img_sprite, NULL);
        menu_first_page(rpg);
        menu_snd_page(rpg);
        menu_option_page(rpg);
        credit_page(rpg);
        click_first_menu(rpg);
        check_history(rpg);
        click_history(rpg);
    }
}

void open_wdw(RPG_t *rpg)
{
    init_window(rpg);
    rpg->menu.volume = 100;
    load_menu(rpg);
    rpg->history.clock_history = sfClock_create();
    init_maps(rpg);
    init_map1_3d(rpg);
    init_map2_3d(rpg);
    init_quest(rpg);
    init_inventory_menu(rpg);
    draw_rect_setting_game(rpg);
    int check_black = 0;
    while (sfRenderWindow_isOpen(rpg->window.wdw)) {
        sfRenderWindow_clear(rpg->window.wdw, sfBlack);
        main_menu(rpg);
        main_game(rpg);
        event_wdw(check_black, rpg);
        sfRenderWindow_display(rpg->window.wdw);
    }
    destroy_all(rpg);
    sfTexture_destroy(rpg->dimension.bush);
    sfTexture_destroy(rpg->dimension.well);
    sfTexture_destroy(rpg->dimension.roof_top_red);
    sfTexture_destroy(rpg->dimension.roof_big_house);
    sfTexture_destroy(rpg->dimension.tent);
    sfTexture_destroy(rpg->dimension.tree);
    sfTexture_destroy(rpg->dimension.green_house);
    sfTexture_destroy(rpg->dimension.red_house);
    sfTexture_destroy(rpg->dimension.medical_house);
    sfTexture_destroy(rpg->dimension.honey_house);
    sfSprite_destroy(rpg->dimension.bush_lt);
    sfSprite_destroy(rpg->dimension.bush_ld);
    sfSprite_destroy(rpg->dimension.bush_rt);
    sfSprite_destroy(rpg->dimension.bush_rd);
    sfSprite_destroy(rpg->dimension.well_map1);
    sfSprite_destroy(rpg->dimension.roof_1_map1);
    sfSprite_destroy(rpg->dimension.roof_2_map1);
    sfSprite_destroy(rpg->dimension.roof_3_map1);
    sfSprite_destroy(rpg->dimension.big_house_map1);
    sfSprite_destroy(rpg->dimension.tent_map1);
    sfSprite_destroy(rpg->dimension.tent_map2);
    sfSprite_destroy(rpg->dimension.tree_top_map2);
    sfSprite_destroy(rpg->dimension.tree_bot_map2);
    sfSprite_destroy(rpg->dimension.green_house_map2);
    sfSprite_destroy(rpg->dimension.red_house_map2);
    sfSprite_destroy(rpg->dimension.honey_house_map2);
    sfSprite_destroy(rpg->dimension.medical_house_map2);
    sfRenderWindow_destroy(rpg->window.wdw);
}
