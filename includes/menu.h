/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef MENU_H_
    #define MENU_H_

typedef struct menu_s {
    sfTexture *bk_menu_img;
    sfSprite *bk_menu_img_sprite;
    sfFont *game_name_font;
    sfFont *game_number_font;
    sfText *text_game_name;
    sfText *click_to_play;
    sfText *history;
    sfText *option;
    sfText *play;
    sfText *credit;
    sfText *back;
    sfMusic *back_music;
    int check_first_menu;
    sfVector2i mouse_menu;
    sfTexture *button_history_txt;
    sfSprite *button_history_spr;
    sfSprite *button_play_spr;
    sfSprite *button_option_spr;
    sfSprite *button_credit_spr;
    sfSprite *button_back_spr;
    sfIntRect menu_wdw;
    sfClock *clock;
    sfTexture *mute_txt;
    sfSprite *mute_spr;
    sfRectangleShape *music_bar;
    sfVector2f pos_music_bar;
    sfVector2f size_music_bar;
    sfRectangleShape *slider_music;
    sfVector2f pos_slider_music;
    sfVector2f size_slider_music;
    sfText *music;
    sfRectangleShape *effect_bar;
    sfVector2f pos_effect_bar;
    sfVector2f size_effect_bar;
    sfRectangleShape *slider_effect;
    sfVector2f pos_slider_effect;
    sfVector2f size_slider_effect;
    sfRectangleShape *mute_effect;
    sfVector2f pos_mute_effect;
    sfVector2f size_mute_effect;
    sfText *effect;
    float volume;
    float volume_effect;
    int check_mute;
    sfRectangleShape *button_full_rect;
    sfVector2f pos_full_button;
    sfVector2f size_full_button;
    sfRectangleShape *button_1300_rect;
    sfVector2f pos_1300_button;
    sfVector2f size_1300_button;
    sfRectangleShape *button_300_rect;
    sfVector2f pos_300_button;
    sfVector2f size_300_button;
    sfText *fullscreen;
    sfText *middle_screen;
    sfText *small_screen;
    sfText *resolutions;
    int check_res;
    sfRectangleShape *button_min_fps;
    sfVector2f pos_min_fps_button;
    sfVector2f size_min_fps_button;
    sfRectangleShape *button_middle_fps;
    sfVector2f pos_mid_fps_button;
    sfVector2f size_mid_fps_button;
    sfRectangleShape *button_high_fps;
    sfVector2f pos_high_fps_button;
    sfVector2f size_high_fps_button;
    sfText *min_fps;
    sfText *mid_fps;
    sfText *high_fps;
    sfText *fps;
    int check_fps;
    sfText *credit_name;
    sfRectangleShape *rect_name;
    sfVector2f pos_rect_name;
    sfVector2f size_rect_name;
} menu_t;

typedef struct history_s {
    sfEvent event;
    sfIntRect menu_history;
    sfTexture* texture_history;
    sfSprite* sprite_history;
    sfIntRect menu_history_end;
    sfTexture* texture_history_end;
    sfSprite* sprite_history_end;
    sfClock* clock_history;
    int anim_finished1;
    int anim_finished2;
}history_t;

int create_background_img(menu_t *menu);
int create_history(history_t *history);
int create_history_end(history_t *history);
void print_name_menu(menu_t *menu);
int load_menu_music(menu_t *menu);
void load_history(history_t *history);
void click_first_menu(menu_t *menu);
void print_click_to_play(menu_t *menu);
void get_mouse_pos_menu(sfRenderWindow *wdw, menu_t *menu);
void hover_click_to_play(menu_t *menu);
int button_menu_history(menu_t *menu);
void motion_history(history_t *history);
void motion_history_end(history_t *history);
void motion_menu_bk(menu_t *menu);
int button_menu_option(menu_t *menu);
int button_menu_play(menu_t *menu);
void button_history_text(menu_t *menu);
void button_play_text(menu_t *menu);
void button_option_text(menu_t *menu);
void hover_history(menu_t *menu);
void hover_play(menu_t *menu);
void hover_option(menu_t *menu);
void hover_credit(menu_t *menu);
void hover_back(menu_t *menu);
int button_menu_credit(menu_t *menu);
void button_credit_text(menu_t *menu);
void button_menu(menu_t *menu, sfSprite *sprite, sfVector2f pos);
int button_menu_back(menu_t *menu);
void button_back_text(menu_t *menu);
void click_back(menu_t *menu);
void option_click(menu_t *menu);
void create_mute_sprite(menu_t *menu);
void create_bar_music(menu_t *menu);
void click_back_option(menu_t *menu);
void create_slider_music(menu_t *menu);
void create_music_txt(menu_t *menu);
void select_volume(menu_t *menu);
void create_effect_txt(menu_t *menu);
void create_slider_effect(menu_t *menu);
void create_bar_effect(menu_t *menu);
void select_volume_effect(menu_t *menu);
void create_trans_mute(menu_t *menu);
void select_mute(menu_t *menu);
void display_rect_mute(menu_t *menu, sfRenderWindow *wdw);
void deselect_mute(menu_t *menu);
void create_fullscreen_button(menu_t *menu);
void create_1300_button(menu_t *menu);
void create_300_button(menu_t *menu);
void create_full_txt(menu_t *menu);
void create_1300_txt(menu_t *menu);
void create_300_txt(menu_t *menu);
void resolutions(menu_t *menu);
void select_button_full(menu_t *menu);
void select_button_middle(menu_t *menu);
void select_button_small(menu_t *menu);
void check_choosen_res(menu_t *menu, sfRenderWindow *wdw);
void create_30_fps(menu_t *menu);
void create_60_fps(menu_t *menu);
void create_90_fps(menu_t *menu);
void create_txt_min_fps(menu_t *menu);
void create_txt_mid_fps(menu_t *menu);
void create_txt_high_fps(menu_t *menu);
void create_txt_framelimit(menu_t *menu);
void select_min_fps(menu_t *menu);
void select_mid_fps(menu_t *menu);
void select_high_fps(menu_t *menu);
void check_choosen_fps(menu_t *menu, sfRenderWindow *wdw);
void credit_click(menu_t *menu);
void create_txt_credit(menu_t *menu);
void create_rect_credit(menu_t *menu);
void destroy_menu(menu_t *menu);
void load_menu(history_t *history, menu_t *menu);
void draw_rect_option(sfRenderWindow *wdw, menu_t *menu);
void draw_text_option(sfRenderWindow *wdw, menu_t *menu);
void destroy_history(history_t *history);
void menu_first_page(sfRenderWindow *wdw, menu_t *menu);
void menu_snd_page(sfRenderWindow *wdw, menu_t *menu);
void menu_option_page(sfRenderWindow *wdw, menu_t *menu);
void credit_page(sfRenderWindow *wdw, menu_t *menu);
void choosen_high(sfRenderWindow *wdw, menu_t *menu);
void choosen_med(sfRenderWindow *wdw, menu_t *menu);
void choosen_small(sfRenderWindow *wdw, menu_t *menu);
void click_play(menu_t *menu);
int click_history(history_t *history, menu_t *menu);
void check_history(history_t *history,  menu_t *menu);
sfBool is_on_button(menu_t *menu, sfSprite *sprite);

#endif /* !MENU_H_ */
