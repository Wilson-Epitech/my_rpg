/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** menu_name
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

int create_background_img(menu_t *menu)
{
    menu->menu_wdw.top = 30;
    menu->menu_wdw.left = 0;
    menu->menu_wdw.height = 700;
    menu->menu_wdw.width = 2000;
    sfVector2f scale = {1.5, 1.5};

    menu->bk_menu_img =
    sfTexture_createFromFile("textures/menu/spritesheet.png",NULL);
    if (!menu->bk_menu_img)
        return (84);
    menu->bk_menu_img_sprite = sfSprite_create();
    sfSprite_setTexture(menu->bk_menu_img_sprite, menu->bk_menu_img, sfTrue);
    sfSprite_setScale(menu->bk_menu_img_sprite, scale);
    sfSprite_setTextureRect(menu->bk_menu_img_sprite, menu->menu_wdw);
    return 0;
}

void motion_menu_bk(menu_t *menu)
{
    float seconds;
    sfTime time;
    time = sfClock_getElapsedTime(menu->clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.2) {
        if (menu->menu_wdw.top < 13000) {
            menu->menu_wdw.top = menu->menu_wdw.top + 722;
        } else {
            menu->menu_wdw.top = 30;
        }
        sfClock_restart(menu->clock);
        sfSprite_setTextureRect(menu->bk_menu_img_sprite, menu->menu_wdw);
    }
}

void print_name_menu(menu_t *menu)
{
    sfVector2f pos_game_name_text = {150, 25};

    menu->game_name_font =
    sfFont_createFromFile("textures/font/Game of Thrones.ttf");
    menu->text_game_name = sfText_create();
    sfText_setFont(menu->text_game_name, menu->game_name_font);
    sfText_setString(menu->text_game_name, "Dragon Burden");
    sfText_setCharacterSize(menu->text_game_name, 150);
    sfText_setPosition(menu->text_game_name, pos_game_name_text);
    sfText_setColor(menu->text_game_name, sfBlack);
    menu->check_first_menu = 1;
}

void print_click_to_play(menu_t *menu)
{
    sfVector2f pos_click_to_play = {950, 325};

    menu->click_to_play = sfText_create();
    sfText_setFont(menu->click_to_play, menu->game_name_font);
    sfText_setString(menu->click_to_play, "Click To Play");
    sfText_setCharacterSize(menu->click_to_play, 45);
    sfText_setPosition(menu->click_to_play, pos_click_to_play);
    menu->check_first_menu = 1;
}

int load_menu_music(menu_t *menu)
{
    menu->back_music = sfMusic_createFromFile("textures/music/back_menu.ogg");
    if (!menu->back_music)
        return 84;
    sfMusic_play(menu->back_music);
    sfMusic_setLoop(menu->back_music, sfTrue);
    sfMusic_setVolume(menu->back_music, menu->volume);
    return 0;
}
