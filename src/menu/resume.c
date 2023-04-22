/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** resume
*/

#include "all_struct.h"

void init_button_resume(RPG_t *rpg)
{
    sfVector2f pos = {800, 450};
    sfVector2f scale = {0.9, 0.9};

    rpg->menu.button_resume_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_resume_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_resume_spr, scale);
    sfSprite_setPosition(rpg->menu.button_resume_spr, pos);
    return;
}

void init_txt_resume(RPG_t *rpg)
{
    sfVector2f pos = {870, 515};

    rpg->menu.resume = sfText_create();
    sfText_setFont(rpg->menu.resume, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.resume, "Resume");
    sfText_setCharacterSize(rpg->menu.resume, 45);
    sfText_setPosition(rpg->menu.resume, pos);
    sfText_setColor(rpg->menu.resume, sfBlack);
}

void hover_resume(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_resume_spr)
    && parse_config_file(rpg, 1) == 0) {
        sfText_setColor(rpg->menu.resume, sfRed);
        if (sfMouse_isButtonPressed(0)) {
            parse_config_file(rpg, 0);
            sfSprite_setPosition(rpg->struct_sprite.sprite,
            rpg->player.set_player_pos);
            rpg->menu.check_first_menu = 6;
            sfMusic_play(rpg->menu.load_sound);
            sfMusic_play(rpg->menu.load_sound);
        }
    } else if (is_on_button(rpg, rpg->menu.button_resume_spr)
    && parse_config_file(rpg, 1) == 84) {
        sfText_setColor(rpg->menu.resume,
        sfColor_fromRGB(158, 158, 158));
    } else {
        sfText_setColor(rpg->menu.resume, sfBlack);
    }
}
