/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_text_fps
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_txt_min_fps(menu_t *menu)
{
    sfVector2f pos = {720, 625};

    menu->min_fps = sfText_create();
    sfText_setFont(menu->min_fps, menu->game_number_font);
    sfText_setString(menu->min_fps, "30 FPS");
    sfText_setCharacterSize(menu->min_fps, 50);
    sfText_setPosition(menu->min_fps, pos);
    sfText_setColor(menu->min_fps, sfBlack);
}

void create_txt_mid_fps(menu_t *menu)
{
    sfVector2f pos = {1030, 625};

    menu->mid_fps = sfText_create();
    sfText_setFont(menu->mid_fps, menu->game_number_font);
    sfText_setString(menu->mid_fps, "60 FPS");
    sfText_setCharacterSize(menu->mid_fps, 50);
    sfText_setPosition(menu->mid_fps, pos);
    sfText_setColor(menu->mid_fps, sfBlack);
}

void create_txt_high_fps(menu_t *menu)
{
    sfVector2f pos = {1330, 625};

    menu->high_fps = sfText_create();
    sfText_setFont(menu->high_fps, menu->game_number_font);
    sfText_setString(menu->high_fps, "90 FPS");
    sfText_setCharacterSize(menu->high_fps, 50);
    sfText_setPosition(menu->high_fps, pos);
    sfText_setColor(menu->high_fps, sfBlack);
}

void create_txt_framelimit(menu_t *menu)
{
    sfVector2f pos = {350, 625};

    menu->fps = sfText_create();
    sfText_setFont(menu->fps, menu->game_name_font);
    sfText_setString(menu->fps, "FrameLimit");
    sfText_setCharacterSize(menu->fps, 40);
    sfText_setPosition(menu->fps, pos);
    sfText_setColor(menu->fps, sfBlack);
}
