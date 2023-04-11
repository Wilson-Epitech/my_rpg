/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** button_menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

int button_menu_history(menu_t *menu)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {200, 200};

    menu->button_history_txt =
    sfTexture_createFromFile("textures/menu/history_button.png",NULL);
    if (!menu->button_history_txt)
        return (84);
    menu->button_history_spr = sfSprite_create();
    sfSprite_setTexture(menu->button_history_spr,
    menu->button_history_txt, sfTrue);
    sfSprite_setScale(menu->button_history_spr, scale);
    sfSprite_setPosition(menu->button_history_spr, pos);
    return 0;
}

int button_menu_option(menu_t *menu)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {1400, 200};

    menu->button_option_spr = sfSprite_create();
    sfSprite_setTexture(menu->button_option_spr,
    menu->button_history_txt, sfTrue);
    sfSprite_setScale(menu->button_option_spr, scale);
    sfSprite_setPosition(menu->button_option_spr, pos);
    return 0;
}

int button_menu_play(menu_t *menu)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {800, 200};

    menu->button_play_spr = sfSprite_create();
    sfSprite_setTexture(menu->button_play_spr,
    menu->button_history_txt, sfTrue);
    sfSprite_setScale(menu->button_play_spr, scale);
    sfSprite_setPosition(menu->button_play_spr, pos);
    return 0;
}

int button_menu_credit(menu_t *menu)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {800, 700};

    menu->button_credit_spr = sfSprite_create();
    sfSprite_setTexture(menu->button_credit_spr,
    menu->button_history_txt, sfTrue);
    sfSprite_setScale(menu->button_credit_spr, scale);
    sfSprite_setPosition(menu->button_credit_spr, pos);
    return 0;
}

int button_menu_back(menu_t *menu)
{
    sfVector2f scale = {0.5, 0.5};
    sfVector2f pos = {50, 25};

    menu->button_back_spr = sfSprite_create();
    sfSprite_setTexture(menu->button_back_spr,
    menu->button_history_txt, sfTrue);
    sfSprite_setScale(menu->button_back_spr, scale);
    sfSprite_setPosition(menu->button_back_spr, pos);
    return 0;
}
