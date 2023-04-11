/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** choose_volume
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void select_volume(menu_t *menu)
{
    if (menu->mouse_menu.x > 700 && menu->mouse_menu .x < 1500
    && menu->mouse_menu.y > 175 && menu->mouse_menu.y < 240) {
            if (sfMouse_isButtonPressed(0)) {
                menu->check_mute = 0;
                sfVector2f new_pos =
                {menu->mouse_menu.x, (menu->pos_music_bar.y - 20)};
                sfRectangleShape_setPosition(menu->slider_music, new_pos);
                float vol =
                (menu->mouse_menu.x - menu->pos_music_bar.x) / 8;
                menu->volume = vol;
                sfMusic_setVolume(menu->back_music, menu->volume);
            }
    }
}

void select_volume_effect(menu_t *menu)
{
    if (menu->mouse_menu.x > 700 && menu->mouse_menu .x < 1500
    && menu->mouse_menu.y > 280 && menu->mouse_menu.y < 335) {
            if (sfMouse_isButtonPressed(0)) {
                menu->check_mute = 0;
                sfVector2f new_pos =
                {menu->mouse_menu.x, (menu->pos_effect_bar.y - 20)};
                sfRectangleShape_setPosition(menu->slider_effect, new_pos);
                float vol = (menu->mouse_menu.x - menu->pos_effect_bar.x) / 8;
                menu->volume_effect = vol;
                //sfMusic_setVolume(menu->back_music, menu->volume);
            }
    }
}
