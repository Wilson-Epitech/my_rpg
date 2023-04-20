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
    sfText *quit;
    sfText *resume;
    sfMusic *back_music;
    int check_first_menu;
    sfVector2i mouse_menu;
    sfTexture *button_history_txt;
    sfSprite *button_history_spr;
    sfSprite *button_play_spr;
    sfSprite *button_option_spr;
    sfSprite *button_credit_spr;
    sfSprite *button_back_spr;
    sfSprite *button_quit_spr;
    sfSprite *button_resume_spr;
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
    int quit_nb;
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

#endif /* !MENU_H_ */
