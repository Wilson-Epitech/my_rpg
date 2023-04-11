/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** effect_mute_button
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_trans_mute(menu_t *menu)
{
    menu->mute_effect = sfRectangleShape_create();
    menu->size_mute_effect.x = 180;
    menu->size_mute_effect.y = 125;
    menu->pos_mute_effect.x = 1550;
    menu->pos_mute_effect.y = 190;

    sfRectangleShape_setSize(menu->mute_effect,
    menu->size_mute_effect);
    sfRectangleShape_setPosition(menu->mute_effect,
    menu->pos_mute_effect);
    sfRectangleShape_setFillColor(menu->mute_effect,
    sfColor_fromRGBA(0, 0, 0, 100));
}

void display_rect_mute(menu_t *menu, sfRenderWindow *wdw)
{
    sfVector2f scale_small = {0.4, 0.4};

    if (menu->check_mute == 1) {
        sfRenderWindow_drawRectangleShape(wdw, menu->mute_effect, NULL);
        menu->volume = 0;
        menu->volume_effect = 0;
        sfMusic_setVolume(menu->back_music, menu->volume);
        //sfMusic_setVolume(menu->effect, menu->volume_effect);
    }
    if (menu->check_mute == 0) {
        sfVector2f music = sfRectangleShape_getPosition(menu->slider_music);
        sfVector2f effect = sfRectangleShape_getPosition(menu->slider_effect);
        float vol_music = (music.x - menu->pos_music_bar.x) / 8;
        float vol_effect = (effect.x - menu->pos_effect_bar.x) / 8;
        menu->volume = vol_music;
        menu->volume_effect = vol_effect;
        sfMusic_setVolume(menu->back_music, menu->volume);
        //sfMusic_setVolume(menu->back_music, menu->volume_effect);
    }
    sfSprite_setScale(menu->mute_spr, scale_small);
}
