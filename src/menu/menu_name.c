/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** menu_name
*/

#include "all_struct.h"

int create_background_img(RPG_t *rpg)
{
    rpg->menu.menu_wdw.top = 30;
    rpg->menu.menu_wdw.left = 0;
    rpg->menu.menu_wdw.height = 700;
    rpg->menu.menu_wdw.width = 2000;
    sfVector2f scale = {1.6, 1.6};

    rpg->menu.bk_menu_img =
    sfTexture_createFromFile("textures/menu/spritesheet.png",NULL);
    if (!rpg->menu.bk_menu_img)
        return (84);
    rpg->menu.bk_menu_img_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->menu.bk_menu_img_sprite,
    rpg->menu.bk_menu_img, sfTrue);
    sfSprite_setScale(rpg->menu.bk_menu_img_sprite, scale);
    sfSprite_setTextureRect(rpg->menu.bk_menu_img_sprite, rpg->menu.menu_wdw);
    return 0;
}

void motion_menu_bk(RPG_t *rpg)
{
    float seconds;
    sfTime time;
    time = sfClock_getElapsedTime(rpg->menu.clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.2) {
        if (rpg->menu.menu_wdw.top < 13000) {
            rpg->menu.menu_wdw.top = rpg->menu.menu_wdw.top + 722;
        } else {
            rpg->menu.menu_wdw.top = 30;
        }
        sfClock_restart(rpg->menu.clock);
        sfSprite_setTextureRect(rpg->menu.bk_menu_img_sprite,
        rpg->menu.menu_wdw);
    }
}

void print_name_menu(RPG_t *rpg)
{
    sfVector2f pos_game_name_text = {150, 25};

    rpg->menu.game_name_font =
    sfFont_createFromFile("textures/font/Game of Thrones.ttf");
    rpg->menu.text_game_name = sfText_create();
    sfText_setFont(rpg->menu.text_game_name, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.text_game_name, "Dragon Burden");
    sfText_setCharacterSize(rpg->menu.text_game_name, 150);
    sfText_setPosition(rpg->menu.text_game_name, pos_game_name_text);
    sfText_setColor(rpg->menu.text_game_name, sfBlack);
    rpg->menu.check_first_menu = 1;
}

void print_click_to_play(RPG_t *rpg)
{
    sfVector2f pos_click_to_play = {950, 325};

    rpg->menu.click_to_play = sfText_create();
    sfText_setFont(rpg->menu.click_to_play, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.click_to_play, "Click To Play");
    sfText_setCharacterSize(rpg->menu.click_to_play, 45);
    sfText_setPosition(rpg->menu.click_to_play, pos_click_to_play);
    rpg->menu.check_first_menu = 1;
}

int load_menu_music(RPG_t *rpg)
{
    rpg->menu.back_music
    = sfMusic_createFromFile("textures/music/back_menu.ogg");
    if (!rpg->menu.back_music)
        return 84;
    sfMusic_play(rpg->menu.back_music);
    sfMusic_setLoop(rpg->menu.back_music, sfTrue);
    sfMusic_setVolume(rpg->menu.back_music, rpg->menu.volume);
    rpg->menu.save_sound
    = sfMusic_createFromFile("textures/music/save_sound.ogg");
    sfMusic_setVolume(rpg->menu.save_sound, rpg->menu.volume_effect);
    rpg->menu.load_sound
    = sfMusic_createFromFile("textures/music/load_sound.ogg");
    sfMusic_setVolume(rpg->menu.load_sound, rpg->menu.volume_effect);
    rpg->menu.new_game_sound
    = sfMusic_createFromFile("textures/music/new_game_sound.ogg");
    sfMusic_setVolume(rpg->menu.new_game_sound, rpg->menu.volume_effect);
    return 0;
}
