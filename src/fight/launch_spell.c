/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "all_struct.h"

int damage_causen(int player_attack, int enemy_def)
{
    int damage = player_attack - enemy_def;

    if (damage < 0)
        damage = 0;
    return damage;
}

int launch_spell(sfClock *spell_clock, sfIntRect *rect, int max_rect)
{
    sfTime time;
    float seconds;

    while (rect->top < max_rect + 300) {
        time = sfClock_getElapsedTime(spell_clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.04) {
            rect->top += rect->height;
            sfClock_restart(spell_clock);
            return (1);
        }
    }
    rect->top = 0;
    return (-1);
}

int animate_explosion(sfClock *spell_clock, sfIntRect *rect, int max_rect)
{
    sfTime time;
    float seconds;

    while (rect->top < max_rect + 300) {
        time = sfClock_getElapsedTime(spell_clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.08) {
            rect->top += rect->height;
            sfClock_restart(spell_clock);
            return (1);
        }
    }
    rect->top = 0;
    return (-1);
}

int animate_player(sfClock *spell_clock, sfIntRect *rect, int max_rect)
{
    sfTime time;
    float seconds;

    while (rect->left < max_rect) {
        time = sfClock_getElapsedTime(spell_clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.05) {
            rect->left += rect->width;
            sfClock_restart(spell_clock);
            return (1);
        }
    }
    rect->left = 0;
    return (-1);
}
