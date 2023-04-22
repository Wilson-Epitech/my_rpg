/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include "all_struct.h"
#include <stdbool.h>

sfVector2f get_mouse_position(RPG_t *rpg)
{
    sfVector2i mousePositionPixels = sfMouse_getPositionRenderWindow(rpg->window.wdw);
    sfVector2f click_pos = sfRenderWindow_mapPixelToCoords(rpg->window.wdw, mousePositionPixels, NULL);
    return click_pos;
}



int move_items(RPG_t *rpg, sfEvent event)
{
    sfVector2f mousePosition;

    if (event.type == sfEvtMouseButtonPressed && rpg->menu.check_first_menu == 6) {
        if (event.mouseButton.button == sfMouseLeft) {
            mousePosition = get_mouse_position(rpg);
            if (is_on_button(rpg, rpg->item.item1)) {
                rpg->item.item_selected = rpg->item.item1;
                rpg->item.display = 1;
            }
            if (is_on_button(rpg, rpg->item.item2)) {
                rpg->item.item_selected = rpg->item.item2;
                rpg->item.display = 1;
            }
            if (rpg->item.item_in_hand == 1) {
                if (event.type == sfEvtMouseButtonPressed && event.mouseButton.button == sfMouseLeft) {
                    if (is_valid_click(mousePosition)) {
                        mousePosition = get_mouse_position(rpg);
                        mousePosition.x = mousePosition.x - 20;
                        mousePosition.y = mousePosition.y - 20;
                        sfSprite_setPosition(rpg->item.item_selected, mousePosition);
                        rpg->item.display = 0;
                        rpg->item.item_in_hand = 0;
                    } else {
                        // rpg->item.display = 0;
                        // rpg->item.item_in_hand = 0;
                        return 0;
                        }
                    }
                }
        }
    }
    return 0;
}

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
        && menu_game != 2 && rpg->map.spin != 1) {
            move_sprite(rpg);
            check_black = 1;
        }
        if (event.type == sfEvtKeyPressed &&
        sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue
        && rpg->menu.check_first_menu == 6) {
            menu_game = press_inventory(rpg, menu_game);
        }
        move_items(rpg, event);
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
        draw_all_sprites_maps(rpg);
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

void init_inventory_item(RPG_t *rpg)
{
    rpg->item.item_selected = NULL;
    rpg->item.item1_texture = sfTexture_createFromFile("textures/inventory_menu/item1.png", NULL);
    rpg->item.item2_texture = sfTexture_createFromFile("textures/inventory_menu/item2.png", NULL);
    rpg->item.rect_case = sfRectangleShape_create();
    sfVector2f size = {50.f, 50.f};
    sfRectangleShape_setSize(rpg->item.rect_case, size);
    sfRectangleShape_setFillColor(rpg->item.rect_case, sfRed);
    rpg->item.display = 0;
    rpg->item.display_item1 = 0;
    rpg->item.display_item2 = 0;
    rpg->item.item1_old_pos.x = 0;
    rpg->item.item1_old_pos.y = 0;
    rpg->item.item2_old_pos.x = 0;
    rpg->item.item2_old_pos.y = 0;
    rpg->item.item_in_hand = 0;
    rpg->item.item1 = sfSprite_create();
    sfSprite_setTexture(rpg->item.item1, rpg->item.item1_texture, sfTrue);
    rpg->item.item2 = sfSprite_create();
    sfSprite_setTexture(rpg->item.item2, rpg->item.item2_texture, sfTrue);
    sfSprite_setPosition(rpg->item.item1, (sfVector2f){388, 396});
    sfSprite_setPosition(rpg->item.item2, (sfVector2f){330, 288});
    sfVector2f item_scale = {0.2, 0.2};
    sfSprite_setScale(rpg->item.item1, item_scale);
    sfSprite_setScale(rpg->item.item2, item_scale);
}


void fix_item_to_mouse(RPG_t *rpg)
{
    if (rpg->item.display == 1) {
        sfVector2i mousePositionPixels = sfMouse_getPositionRenderWindow(rpg->window.wdw);
        sfVector2f mousePosition = sfRenderWindow_mapPixelToCoords(rpg->window.wdw, mousePositionPixels, NULL);
        mousePosition.x = mousePosition.x - 20;
        mousePosition.y = mousePosition.y - 20;
        sfSprite_setPosition(rpg->item.item_selected, mousePosition);
        rpg->item.item_in_hand = 1;
    }
}

void open_wdw(RPG_t *rpg)
{
    init_window(rpg);
    load_menu(rpg);
    init_maps(rpg);
    init_map_3d(rpg);
    init_quest(rpg);
    init_inventory_menu(rpg);
    init_inventory_item(rpg);
    init_fighting_players(rpg);
    init_map_and_spells(rpg);
    draw_rect_setting_game(rpg);
    int check_black = 0;
    while (sfRenderWindow_isOpen(rpg->window.wdw)) {
        sfRenderWindow_clear(rpg->window.wdw, sfBlack);
        main_menu(rpg);
        main_game(rpg);
        launch_fight(rpg);
        fix_item_to_mouse(rpg);
        event_wdw(check_black, rpg);
        sfRenderWindow_display(rpg->window.wdw);
    }
    destroy_all(rpg);
    sfRenderWindow_destroy(rpg->window.wdw);
}
