/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** create and motion history
*/

#include "my.h"
#include "menu.h"
#include "maps.h"

int create_history(history_t *history)
{
    history->menu_history.top = 30;
    history->menu_history.left = 0;
    history->menu_history.height = 800;
    history->menu_history.width = 1500;
    sfVector2f scale_book = {3.2, 3.2};
    history->texture_history =
    sfTexture_createFromFile("textures/history/sprite_history.png", NULL);

    if (!history->texture_history)
        return 84;
    history->sprite_history = sfSprite_create();
    sfSprite_setTexture(history->sprite_history,
    history->texture_history, sfTrue);
    sfSprite_setScale(history->sprite_history, scale_book);
    sfSprite_setTextureRect(history->sprite_history, history->menu_history);
    return 0;
}

void motion_history(history_t *history)
{
    float seconds;
    sfTime time;
    time = sfClock_getElapsedTime(history->clock_history);
    seconds = time.microseconds / 1000000.0;

    if (seconds > 0.1) {
        if (history->menu_history.top < 4500) {
            history->menu_history.top = history->menu_history.top + 780;
        } else {
            history->anim_finished1 = 3;
        }
        sfSprite_setTextureRect(history->sprite_history, history->menu_history);
        sfClock_restart(history->clock_history);
    }
}

int create_history_end(history_t *history)
{
    history->menu_history_end.top = 30;
    history->menu_history_end.left = 0;
    history->menu_history_end.height = 800;
    history->menu_history_end.width = 1500;
    sfVector2f scale_book_end = {3.2, 3.2};
    history->texture_history_end =
    sfTexture_createFromFile("textures/history/sprite_book_end.png", NULL);

    if (!history->texture_history_end)
        return 84;
    history->sprite_history_end = sfSprite_create();
    sfSprite_setTexture(history->sprite_history_end,
    history->texture_history_end, sfTrue);
    sfSprite_setScale(history->sprite_history_end, scale_book_end);
    sfSprite_setTextureRect(history->sprite_history_end,
    history->menu_history_end);
    return 0;
}

void motion_history_end(history_t *history)
{
    float seconds;
    sfTime time;
    time = sfClock_getElapsedTime(history->clock_history);
    seconds = time.microseconds / 995600.0;

    if (seconds > 0.1) {
        if (history->menu_history_end.top < 4500) {
            history->menu_history_end.top =
            history->menu_history_end.top + 780;
        } else {
            history->anim_finished2 = 3;
        }
        sfSprite_setTextureRect(history->sprite_history_end,
        history->menu_history_end);
        sfClock_restart(history->clock_history);
    }
}
