/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** quit
*/

#include "all_struct.h"

void init_button_quit(RPG_t *rpg)
{
    sfVector2f pos = {1700, 25};
    sfVector2f scale = {0.5, 0.5};

    rpg->menu.button_quit_spr = sfSprite_create();
    sfSprite_setTexture(rpg->menu.button_quit_spr,
    rpg->menu.button_history_txt, sfTrue);
    sfSprite_setScale(rpg->menu.button_quit_spr, scale);
    sfSprite_setPosition(rpg->menu.button_quit_spr, pos);
    return;
}

void init_txt_quit(RPG_t *rpg)
{
    sfVector2f pos = {1740, 55};

    rpg->menu.quit = sfText_create();
    sfText_setFont(rpg->menu.quit, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.quit, "Quit");
    sfText_setCharacterSize(rpg->menu.quit, 35);
    sfText_setPosition(rpg->menu.quit, pos);
    sfText_setColor(rpg->menu.quit, sfBlack);
}

void hover_quit(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_quit_spr)) {
        sfText_setColor(rpg->menu.quit, sfRed);
    } else {
        sfText_setColor(rpg->menu.quit, sfBlack);
    }
}

void click_quit(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_quit_spr)
    && sfMouse_isButtonPressed(0)) {
        rpg->menu.quit_nb = 1;
    } else {
        rpg->menu.quit_nb = 0;
    }
}
