/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** choose_volume
*/

#include "all_struct.h"

void select_volume(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 700 && rpg->menu.mouse_menu .x < 1500
    && rpg->menu.mouse_menu.y > 175 && rpg->menu.mouse_menu.y < 240) {
            if (sfMouse_isButtonPressed(0)) {
                rpg->menu.check_mute = 0;
                sfVector2f new_pos =
                {rpg->menu.mouse_menu.x, (rpg->menu.pos_music_bar.y - 20)};
                sfRectangleShape_setPosition(rpg->menu.slider_music, new_pos);
                float vol =
                (rpg->menu.mouse_menu.x - rpg->menu.pos_music_bar.x) / 8;
                rpg->menu.volume = vol;
                sfMusic_setVolume(rpg->menu.back_music, rpg->menu.volume);
            }
    }
}

void select_volume_effect(RPG_t *rpg)
{
    if (rpg->menu.mouse_menu.x > 700 && rpg->menu.mouse_menu .x < 1500
    && rpg->menu.mouse_menu.y > 280 && rpg->menu.mouse_menu.y < 335) {
            if (sfMouse_isButtonPressed(0)) {
                rpg->menu.check_mute = 0;
                sfVector2f new_pos =
                {rpg->menu.mouse_menu.x, (rpg->menu.pos_effect_bar.y - 20)};
                sfRectangleShape_setPosition(rpg->menu.slider_effect, new_pos);
                float vol = (rpg->menu.mouse_menu.x - rpg->menu.pos_effect_bar.x) / 8;
                rpg->menu.volume_effect = vol;
                //sfMusic_setVolume(menu->back_music, menu->volume);
            }
    }
}
