/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create_text_resolution
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_full_txt(menu_t *menu)
{
    menu->game_number_font =
    sfFont_createFromFile("textures/font/CrimsonText-SemiBoldItalic.ttf");
    sfVector2f pos = {700, 425};

    menu->fullscreen = sfText_create();
    sfText_setFont(menu->fullscreen, menu->game_number_font);
    sfText_setString(menu->fullscreen, "1920x1080");
    sfText_setCharacterSize(menu->fullscreen, 47);
    sfText_setPosition(menu->fullscreen, pos);
    sfText_setColor(menu->fullscreen, sfBlack);
}

void create_1300_txt(menu_t *menu)
{
    sfVector2f pos = {1010, 425};

    menu->middle_screen = sfText_create();
    sfText_setFont(menu->middle_screen, menu->game_number_font);
    sfText_setString(menu->middle_screen, "1366x768");
    sfText_setCharacterSize(menu->middle_screen, 47);
    sfText_setPosition(menu->middle_screen, pos);
    sfText_setColor(menu->middle_screen, sfBlack);
}

void create_300_txt(menu_t *menu)
{
    sfVector2f pos = {1310, 425};

    menu->small_screen = sfText_create();
    sfText_setFont(menu->small_screen, menu->game_number_font);
    sfText_setString(menu->small_screen, "360x640");
    sfText_setCharacterSize(menu->small_screen, 47);
    sfText_setPosition(menu->small_screen, pos);
    sfText_setColor(menu->small_screen, sfBlack);
}

void resolutions(menu_t *menu)
{
    sfVector2f pos = {350, 435};

    menu->resolutions = sfText_create();
    sfText_setFont(menu->resolutions, menu->game_name_font);
    sfText_setString(menu->resolutions, "Resolution");
    sfText_setCharacterSize(menu->resolutions, 40);
    sfText_setPosition(menu->resolutions, pos);
    sfText_setColor(menu->resolutions, sfBlack);
}
