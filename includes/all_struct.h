/*
** MY_RPG PROJECT, 2023
** struct_all
** File description:
** all_struct
*/

#ifndef ALL_STRUCT_H_
    #define ALL_STRUCT_H_
    #include "inventory_menu.h"
    #include "maps.h"
    #include "menu.h"
    #include "my.h"
    #include "quest.h"
    #include "sprite.h"
    #include "window.h"

    typedef struct {
        window_t window;
        InventoryMenu_t inventory_menu;
        maps_t  map;
        menu_t  menu;
        history_t history;
        quest_t quest;
        player_t player;
        StructSprite struct_sprite;
        dimension_t dimension;
    } RPG_t;

void init_window(RPG_t *rpg);
void inventory_menu_func(RPG_t *rpg);
void init_inventory_menu(RPG_t *rpg);
void destroy_inventory_menu(RPG_t *rpg);
int press_inventory(RPG_t *rpg, int menu_game);
void draw_fps(RPG_t *rpg);
void draw_setting_inventory(RPG_t *rpg);
void click_back_setting(RPG_t *rpg);
void draw_buttons_inventory(RPG_t *rpg);
void draw_inventory_stat(RPG_t *rpg);
void draw_inventory(RPG_t *rpg);
void draw_buttons_inventory(RPG_t *rpg);
void init_rect_characteristic(RPG_t *rpg);
void init_text_stat(RPG_t *rpg);
void init_health_txt(RPG_t *rpg);
void  init_xp_txt(RPG_t *rpg);
void init_level_txt(RPG_t *rpg);
void init_def_txt(RPG_t *rpg);
void init_atk_txt(RPG_t *rpg);
void init_inventory_txt(RPG_t *rpg);
void draw_rect_setting_game(RPG_t *rpg);

//SPRITE.H//
void init_struct_sprite(RPG_t *rpg);
void move_sprite(RPG_t *rpg);
void get_pos_char(RPG_t *rpg);
void init_grandma_sprite(RPG_t *rpg);
void init_shaolin_sprite(RPG_t *rpg);


//QUEST.H//
void init_help_rect(RPG_t *rpg);
void init_text_help(RPG_t *rpg);
void init_text_help2(RPG_t *rpg);
void init_text_main_quest(RPG_t *rpg);
void init_text_main_quest2(RPG_t *rpg);
void press_enter_help(RPG_t *rpg);
void press_enter_main(RPG_t *rpg);
void init_exclam(RPG_t *rpg);
void talk_to_grandma(RPG_t *rpg);
void talk_to_shaolin(RPG_t *rpg);
void init_rect_current_quest(RPG_t *rpg);
void init_text_talk_grand(RPG_t *rpg);
void init_text_talk_shao(RPG_t *rpg);
void init_text_dragon(RPG_t *rpg);
void destroy_quest(RPG_t *rpg);
void draw_current_text(RPG_t *rpg);
void is_grandma(RPG_t *rpg);
void is_shao(RPG_t *rpg);


//MENU.h
int create_background_img(RPG_t *rpg);
int create_history(RPG_t *rpg);
int create_history_end(RPG_t *rpg);
void print_name_menu(RPG_t *rpg);
int load_menu_music(RPG_t *rpg);
void load_history(RPG_t *rpg);
void click_first_menu(RPG_t *rpg);
void print_click_to_play(RPG_t *rpg);
void get_mouse_pos_menu(RPG_t *rpg);
void hover_click_to_play(RPG_t *rpg);
int button_menu_history(RPG_t *rpg);
void motion_history(RPG_t *rpg);
void motion_history_end(RPG_t *rpg);
void motion_menu_bk(RPG_t *rpg);
int button_menu_option(RPG_t *rpg);
int button_menu_play(RPG_t *rpg);
void button_history_text(RPG_t *rpg);
void button_play_text(RPG_t *rpg);
void button_option_text(RPG_t *rpg);
void hover_history(RPG_t *rpg);
void hover_play(RPG_t *rpg);
void hover_option(RPG_t *rpg);
void hover_credit(RPG_t *rpg);
void hover_back(RPG_t *rpg);
int button_menu_credit(RPG_t *rpg);
void button_credit_text(RPG_t *rpg);
void button_menu(RPG_t *rpg, sfSprite *sprite, sfVector2f pos);
int button_menu_back(RPG_t *rpg);
void button_back_text(RPG_t *rpg);
void click_back(RPG_t *rpg);
void option_click(RPG_t *rpg);
void create_mute_sprite(RPG_t *rpg);
void create_bar_music(RPG_t *rpg);
void click_back_option(RPG_t *rpg);
void create_slider_music(RPG_t *rpg);
void create_music_txt(RPG_t *rpg);
void select_volume(RPG_t *rpg);
void create_effect_txt(RPG_t *rpg);
void create_slider_effect(RPG_t *rpg);
void create_bar_effect(RPG_t *rpg);
void select_volume_effect(RPG_t *rpg);
void create_trans_mute(RPG_t *rpg);
void select_mute(RPG_t *rpg);
void display_rect_mute(RPG_t *rpg);
void deselect_mute(RPG_t *rpg);
void create_fullscreen_button(RPG_t *rpg);
void create_1300_button(RPG_t *rpg);
void create_300_button(RPG_t *rpg);
void create_full_txt(RPG_t *rpg);
void create_1300_txt(RPG_t *rpg);
void create_300_txt(RPG_t *rpg);
void resolutions(RPG_t *rpg);
void select_button_full(RPG_t *rpg);
void select_button_middle(RPG_t *rpg);
void select_button_small(RPG_t *rpg);
void check_choosen_res(RPG_t *rpg);
void create_30_fps(RPG_t *rpg);
void create_60_fps(RPG_t *rpg);
void create_90_fps(RPG_t *rpg);
void create_txt_min_fps(RPG_t *rpg);
void create_txt_mid_fps(RPG_t *rpg);
void create_txt_high_fps(RPG_t *rpg);
void create_txt_framelimit(RPG_t *rpg);
void select_min_fps(RPG_t *rpg);
void select_mid_fps(RPG_t *rpg);
void select_high_fps(RPG_t *rpg);
void check_choosen_fps(RPG_t *rpg);
void credit_click(RPG_t *rpg);
void create_txt_credit(RPG_t *rpg);
void create_rect_credit(RPG_t *rpg);
void destroy_menu(RPG_t *rpg);
void load_menu(RPG_t *rpg);
void draw_rect_option(RPG_t *rpg);
void draw_text_option(RPG_t *rpg);
void destroy_history(RPG_t *rpg);
void menu_first_page(RPG_t *rpg);
void menu_snd_page(RPG_t *rpg);
void menu_option_page(RPG_t *rpg);
void credit_page(RPG_t *rpg);
void choosen_high(RPG_t *rpg);
void choosen_med(RPG_t *rpg);
void choosen_small(RPG_t *rpg);
void click_play(RPG_t *rpg);
void click_history(RPG_t *rpg);
void check_history(RPG_t *rpg);
sfBool is_on_button(RPG_t *rpg, sfSprite *sprite);
void init_button_quit(RPG_t *rpg);
void init_txt_quit(RPG_t *rpg);
void hover_quit(RPG_t *rpg);
void click_quit(RPG_t *rpg);
void init_button_resume(RPG_t *rpg);
void init_txt_resume(RPG_t *rpg);
void init_button_saving(RPG_t *rpg);
void init_txt_saving(RPG_t *rpg);
void init_button_loading(RPG_t *rpg);
void init_button_settings(RPG_t *rpg);
void init_txt_loading(RPG_t *rpg);
void init_txt_settings(RPG_t *rpg);
void hover_resume(RPG_t *rpg);
void hover_loading(RPG_t *rpg);
void hover_saving(RPG_t *rpg);
void hover_settings(RPG_t *rpg);

//MAPS.h//
void init_maps(RPG_t *rpg);
void draw_all_sprites_maps(RPG_t *rpg);
void draw_current_map(RPG_t *rpg);
void get_color_map1(RPG_t *rpg);
void get_color_map2(RPG_t *rpg);
void get_color_map3(RPG_t *rpg);
void get_color_map4(RPG_t *rpg);
void get_color_map5(RPG_t *rpg);
void tp_map1(RPG_t *rpg);
void tp_map2(RPG_t *rpg);
void tp_map3(RPG_t *rpg);
void tp_map4(RPG_t *rpg);
void tp_map5(RPG_t *rpg);
void tp_all_maps(RPG_t *rpg);
void destroy_maps(RPG_t *rpg);
int col_which_map(RPG_t *rpg, int check_black);
void check_next_col(RPG_t *rpg);
void check_next_uncol(RPG_t *rpg);
int check_color_col(RPG_t *rpg, sfImage *img);
int uncollision_char(RPG_t *rpg, sfImage *img);
void init_quest(RPG_t *rpg);
void init_map1_3d(RPG_t *rpg);
void init_map2_3d(RPG_t *rpg);
void init_map3_3d(RPG_t *rpg);
void init_map4_3d(RPG_t *rpg);
void destroy_sprites_maps(RPG_t *rpg);

//MY.h//
int check_error(int ac, char **env);
void open_wdw(RPG_t *rpg);
void destroy_all(RPG_t *rpg);
int stock_in_config_file(RPG_t *rpg, sfSprite *player_sprite, int map_nb);
int parse_config_file(RPG_t *rpg);

#endif /* !ALL_STRUCT_H_ */
