/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** effect_mute_button
*/

#include "all_struct.h"

void create_trans_mute(RPG_t *rpg)
{
    rpg->menu.mute_effect = sfRectangleShape_create();
    rpg->menu.size_mute_effect.x = 180;
    rpg->menu.size_mute_effect.y = 125;
    rpg->menu.pos_mute_effect.x = 1550;
    rpg->menu.pos_mute_effect.y = 190;

    sfRectangleShape_setSize(rpg->menu.mute_effect,
    rpg->menu.size_mute_effect);
    sfRectangleShape_setPosition(rpg->menu.mute_effect,
    rpg->menu.pos_mute_effect);
    sfRectangleShape_setFillColor(rpg->menu.mute_effect,
    sfColor_fromRGBA(0, 0, 0, 100));
}

void display_rect_mute(RPG_t *rpg, sfRenderWindow *wdw)
{
    sfVector2f scale_small = {0.4, 0.4};

    if (rpg->menu.check_mute == 1) {
        sfRenderWindow_drawRectangleShape(wdw, rpg->menu.mute_effect, NULL);
        rpg->menu.volume = 0;
        rpg->menu.volume_effect = 0;
        sfMusic_setVolume(rpg->menu.back_music, rpg->menu.volume);
    }
    if (rpg->menu.check_mute == 0) {
        sfVector2f music = sfRectangleShape_getPosition(rpg->menu.slider_music);
        sfVector2f effect
        = sfRectangleShape_getPosition(rpg->menu.slider_effect);
        float vol_music = (music.x - rpg->menu.pos_music_bar.x) / 8;
        float vol_effect = (effect.x - rpg->menu.pos_effect_bar.x) / 8;
        rpg->menu.volume = vol_music;
        rpg->menu.volume_effect = vol_effect;
        sfMusic_setVolume(rpg->menu.back_music, rpg->menu.volume);
    }
    sfSprite_setScale(rpg->menu.mute_spr, scale_small);
}
