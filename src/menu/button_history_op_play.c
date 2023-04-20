/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** button_menu
*/

#include "all_struct.h"

int button_menu_history(RPG_t *rpg)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {200, 200};

    rpg->menu.button_history_txt =
    sfTexture_createFromFile("textures/menu/history_button.png",NULL);
    if (!rpg->menu.button_history_txt)
        return (84);
    rpg->menu.button_history_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_history_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_history_spr, scale);
    sfSprite_setPosition(rpg->menu.button_history_spr, pos);
    return 0;
}

int button_menu_option(RPG_t *rpg)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {1400, 200};

    rpg->menu.button_option_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_option_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_option_spr, scale);
    sfSprite_setPosition(rpg->menu.button_option_spr, pos);
    return 0;
}

int button_menu_play(RPG_t *rpg)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {800, 200};

    rpg->menu.button_play_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_play_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_play_spr, scale);
    sfSprite_setPosition(rpg->menu.button_play_spr, pos);
    return 0;
}

int button_menu_credit(RPG_t *rpg)
{
    sfVector2f scale = {0.9, 0.9};
    sfVector2f pos = {800, 700};

    rpg->menu.button_credit_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_credit_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_credit_spr, scale);
    sfSprite_setPosition(rpg->menu.button_credit_spr, pos);
    return 0;
}

int button_menu_back(RPG_t *rpg)
{
    sfVector2f scale = {0.5, 0.5};
    sfVector2f pos = {50, 25};

    rpg->menu.button_back_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_back_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_back_spr, scale);
    sfSprite_setPosition(rpg->menu.button_back_spr, pos);
    return 0;
}
