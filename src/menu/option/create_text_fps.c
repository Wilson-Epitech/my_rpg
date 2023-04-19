/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_text_fps
*/

#include "all_struct.h"

void create_txt_min_fps(RPG_t *rpg)
{
    sfVector2f pos = {720, 625};

    rpg->menu.min_fps = sfText_create();
    sfText_setFont(rpg->menu.min_fps, rpg->menu.game_number_font);
    sfText_setString(rpg->menu.min_fps, "30 FPS");
    sfText_setCharacterSize(rpg->menu.min_fps, 50);
    sfText_setPosition(rpg->menu.min_fps, pos);
    sfText_setColor(rpg->menu.min_fps, sfBlack);
}

void create_txt_mid_fps(RPG_t *rpg)
{
    sfVector2f pos = {1030, 625};

    rpg->menu.mid_fps = sfText_create();
    sfText_setFont(rpg->menu.mid_fps, rpg->menu.game_number_font);
    sfText_setString(rpg->menu.mid_fps, "60 FPS");
    sfText_setCharacterSize(rpg->menu.mid_fps, 50);
    sfText_setPosition(rpg->menu.mid_fps, pos);
    sfText_setColor(rpg->menu.mid_fps, sfBlack);
}

void create_txt_high_fps(RPG_t *rpg)
{
    sfVector2f pos = {1330, 625};

    rpg->menu.high_fps = sfText_create();
    sfText_setFont(rpg->menu.high_fps, rpg->menu.game_number_font);
    sfText_setString(rpg->menu.high_fps, "90 FPS");
    sfText_setCharacterSize(rpg->menu.high_fps, 50);
    sfText_setPosition(rpg->menu.high_fps, pos);
    sfText_setColor(rpg->menu.high_fps, sfBlack);
}

void create_txt_framelimit(RPG_t *rpg)
{
    sfVector2f pos = {350, 625};

    rpg->menu.fps = sfText_create();
    sfText_setFont(rpg->menu.fps, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.fps, "FrameLimit");
    sfText_setCharacterSize(rpg->menu.fps, 40);
    sfText_setPosition(rpg->menu.fps, pos);
    sfText_setColor(rpg->menu.fps, sfBlack);
}
