/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create and motion history
*/

#include "all_struct.h"

int create_history(RPG_t *rpg)
{
    rpg->history.menu_history.top = 30;
    rpg->history.menu_history.left = 0;
    rpg->history.menu_history.height = 800;
    rpg->history.menu_history.width = 1500;
    sfVector2f scale_book = {3.2, 3.2};
    rpg->history.texture_history =
    sfTexture_createFromFile("textures/history/sprite_history.png", NULL);

    if (!rpg->history.texture_history)
        return 84;
    rpg->history.sprite_history = sfSprite_create();
    sfSprite_setTexture(rpg->history.sprite_history,
    rpg->history.texture_history, sfTrue);
    sfSprite_setScale(rpg->history.sprite_history, scale_book);
    sfSprite_setTextureRect(rpg->history.sprite_history,
    rpg->history.menu_history);
    return 0;
}

void motion_history(RPG_t *rpg)
{
    float seconds;
    sfTime time;
    time = sfClock_getElapsedTime(rpg->history.clock_history);
    seconds = time.microseconds / 1000000.0;

    if (seconds > 0.1) {
        if (rpg->history.menu_history.top < 4500) {
            rpg->history.menu_history.top =
            rpg->history.menu_history.top + 780;
        } else {
            rpg->history.anim_finished2 = 3;
        }
        sfSprite_setTextureRect(rpg->history.sprite_history,
        rpg->history.menu_history);
        sfClock_restart(rpg->history.clock_history);
    }
}

int create_history_end(RPG_t *rpg)
{
    rpg->history.menu_history_end.top = 30;
    rpg->history.menu_history_end.left = 0;
    rpg->history.menu_history_end.height = 800;
    rpg->history.menu_history_end.width = 1500;
    sfVector2f scale_book_end = {3.2, 3.2};
    rpg->history.texture_history_end =
    sfTexture_createFromFile("textures/history/sprite_book_end.png", NULL);

    if (!rpg->history.texture_history_end)
        return 84;
    rpg->history.sprite_history_end = sfSprite_create();
    sfSprite_setTexture(rpg->history.sprite_history_end,
    rpg->history.texture_history_end, sfTrue);
    sfSprite_setScale(rpg->history.sprite_history_end, scale_book_end);
    sfSprite_setTextureRect(rpg->history.sprite_history_end,
    rpg->history.menu_history_end);
    return 0;
}

void motion_history_end(RPG_t *rpg)
{
    float seconds;
    sfTime time;
    time = sfClock_getElapsedTime(rpg->history.clock_history);
    seconds = time.microseconds / 995600.0;

    if (seconds > 0.1) {
        if (rpg->history.menu_history_end.top < 4500) {
            rpg->history.menu_history_end.top =
            rpg->history.menu_history_end.top + 780;
        }
        sfSprite_setTextureRect(rpg->history.sprite_history_end,
        rpg->history.menu_history_end);
        sfClock_restart(rpg->history.clock_history);
    }
}
