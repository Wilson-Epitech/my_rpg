/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** sound_music
*/

#include "all_struct.h"

void create_mute_sprite(RPG_t *rpg)
{
    sfVector2f scale = {0.4, 0.4};
    sfVector2f pos = {1500, 175};

    rpg->menu.mute_txt =
    sfTexture_createFromFile("textures/menu/option/mute.png",NULL);
    rpg->menu.mute_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.mute_spr,
    rpg->menu.mute_txt, sfTrue);
    sfSprite_setScale(rpg->menu.mute_spr, scale);
    sfSprite_setPosition(rpg->menu.mute_spr, pos);
}

void create_bar_music(RPG_t *rpg)
{
    rpg->menu.music_bar = sfRectangleShape_create();
    rpg->menu.size_music_bar.x = 800;
    rpg->menu.size_music_bar.y = 10;
    rpg->menu.pos_music_bar.x = 700;
    rpg->menu.pos_music_bar.y = 200;

    sfRectangleShape_setSize(rpg->menu.music_bar, rpg->menu.size_music_bar);
    sfRectangleShape_setPosition(rpg->menu.music_bar, rpg->menu.pos_music_bar);
    sfRectangleShape_setFillColor(rpg->menu.music_bar, sfYellow);
}

void create_slider_music(RPG_t *rpg)
{
    rpg->menu.slider_music = sfRectangleShape_create();
    rpg->menu.size_slider_music.x = 10;
    rpg->menu.size_slider_music.y = 50;
    rpg->menu.pos_slider_music.x = 1500;
    rpg->menu.pos_slider_music.y = 180;

    sfRectangleShape_setSize(rpg->menu.slider_music, rpg->menu.size_slider_music);
    sfRectangleShape_setPosition(rpg->menu.slider_music, rpg->menu.pos_slider_music);
    sfRectangleShape_setFillColor(rpg->menu.slider_music, sfBlack);
}

void create_music_txt(RPG_t *rpg)
{
    sfVector2f pos = {450, 125};

    rpg->menu.music = sfText_create();
    sfText_setFont(rpg->menu.music, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.music, "Music\nVolume");
    sfText_setCharacterSize(rpg->menu.music, 40);
    sfText_setPosition(rpg->menu.music, pos);
    sfText_setColor(rpg->menu.music, sfBlack);
}
