/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_text_resolution
*/

#include "all_struct.h"

void create_full_txt(RPG_t *rpg)
{
    rpg->menu.game_number_font =
    sfFont_createFromFile("textures/font/CrimsonText-SemiBoldItalic.ttf");
    sfVector2f pos = {700, 425};

    rpg->menu.fullscreen = sfText_create();
    sfText_setFont(rpg->menu.fullscreen, rpg->menu.game_number_font);
    sfText_setString(rpg->menu.fullscreen, "1920x1080");
    sfText_setCharacterSize(rpg->menu.fullscreen, 47);
    sfText_setPosition(rpg->menu.fullscreen, pos);
    sfText_setColor(rpg->menu.fullscreen, sfBlack);
}

void create_1300_txt(RPG_t *rpg)
{
    sfVector2f pos = {1010, 425};

    rpg->menu.middle_screen = sfText_create();
    sfText_setFont(rpg->menu.middle_screen, rpg->menu.game_number_font);
    sfText_setString(rpg->menu.middle_screen, "1366x768");
    sfText_setCharacterSize(rpg->menu.middle_screen, 47);
    sfText_setPosition(rpg->menu.middle_screen, pos);
    sfText_setColor(rpg->menu.middle_screen, sfBlack);
}

void create_300_txt(RPG_t *rpg)
{
    sfVector2f pos = {1310, 425};

    rpg->menu.small_screen = sfText_create();
    sfText_setFont(rpg->menu.small_screen, rpg->menu.game_number_font);
    sfText_setString(rpg->menu.small_screen, "360x640");
    sfText_setCharacterSize(rpg->menu.small_screen, 47);
    sfText_setPosition(rpg->menu.small_screen, pos);
    sfText_setColor(rpg->menu.small_screen, sfBlack);
}

void resolutions(RPG_t *rpg)
{
    sfVector2f pos = {350, 435};

    rpg->menu.resolutions = sfText_create();
    sfText_setFont(rpg->menu.resolutions, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.resolutions, "Resolution");
    sfText_setCharacterSize(rpg->menu.resolutions, 40);
    sfText_setPosition(rpg->menu.resolutions, pos);
    sfText_setColor(rpg->menu.resolutions, sfBlack);
}
