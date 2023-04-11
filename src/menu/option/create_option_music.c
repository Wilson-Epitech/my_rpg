/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** sound_music
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_mute_sprite(menu_t *menu)
{
    sfVector2f scale = {0.4, 0.4};
    sfVector2f pos = {1500, 175};

    menu->mute_txt =
    sfTexture_createFromFile("textures/menu/option/mute.png",NULL);
    menu->mute_spr = sfSprite_create();
    sfSprite_setTexture(menu->mute_spr,
    menu->mute_txt, sfTrue);
    sfSprite_setScale(menu->mute_spr, scale);
    sfSprite_setPosition(menu->mute_spr, pos);
}

void create_bar_music(menu_t *menu)
{
    menu->music_bar = sfRectangleShape_create();
    menu->size_music_bar.x = 800;
    menu->size_music_bar.y = 10;
    menu->pos_music_bar.x = 700;
    menu->pos_music_bar.y = 200;

    sfRectangleShape_setSize(menu->music_bar, menu->size_music_bar);
    sfRectangleShape_setPosition(menu->music_bar, menu->pos_music_bar);
    sfRectangleShape_setFillColor(menu->music_bar, sfYellow);
}

void create_slider_music(menu_t *menu)
{
    menu->slider_music = sfRectangleShape_create();
    menu->size_slider_music.x = 10;
    menu->size_slider_music.y = 50;
    menu->pos_slider_music.x = 1500;
    menu->pos_slider_music.y = 180;

    sfRectangleShape_setSize(menu->slider_music, menu->size_slider_music);
    sfRectangleShape_setPosition(menu->slider_music, menu->pos_slider_music);
    sfRectangleShape_setFillColor(menu->slider_music, sfBlack);
}

void create_music_txt(menu_t *menu)
{
    sfVector2f pos = {450, 125};

    menu->music = sfText_create();
    sfText_setFont(menu->music, menu->game_name_font);
    sfText_setString(menu->music, "Music\nVolume");
    sfText_setCharacterSize(menu->music, 40);
    sfText_setPosition(menu->music, pos);
    sfText_setColor(menu->music, sfBlack);
}
