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
#include "fighting.h"
#include "my.h"

void set_attack_on_player(FightingSpells *spells, int i)
{
    sfVector2f tornado_on_player = {1430, 490};
    sfVector2f fireflower_on_player = {1350, 420};
    sfVector2f thunder_on_player = {1470, 230};
    sfVector2f rock_on_player = {1350, 530};
    sfVector2f octopus_on_player = {1450, 510};
    sfVector2f explosion_on_player = {1240, 360};

    if (i == TORNADO)
        sfSprite_setPosition(spells[i].animated_sprite, tornado_on_player);
    if (i == FIREFLOWER)
        sfSprite_setPosition(spells[i].animated_sprite, fireflower_on_player);
    if (i == THUNDERBOLT)
        sfSprite_setPosition(spells[i].animated_sprite, thunder_on_player);
    if (i == ROCK)
        sfSprite_setPosition(spells[i].animated_sprite, rock_on_player);
    if (i == OCTOPUS)
        sfSprite_setPosition(spells[i].animated_sprite, octopus_on_player);
    if (i == EXPLOSION)
        sfSprite_setPosition(spells[i].animated_sprite, explosion_on_player);
}

void set_attack_on_drake(FightingSpells *spells, int i)
{
    sfVector2f tornado_on_drake = {400, 480};
    sfVector2f fireflower_on_drake = {340, 390};
    sfVector2f thunder_on_drake = {400, 190};
    sfVector2f rock_on_drake = {320, 480};
    sfVector2f octopus_on_drake = {320, 280};
    sfVector2f explosion_on_drake = {220, 300};

    if (i == TORNADO)
        sfSprite_setPosition(spells[i].animated_sprite, tornado_on_drake);
    if (i == FIREFLOWER)
        sfSprite_setPosition(spells[i].animated_sprite, fireflower_on_drake);
    if (i == THUNDERBOLT)
        sfSprite_setPosition(spells[i].animated_sprite, thunder_on_drake);
    if (i == ROCK)
        sfSprite_setPosition(spells[i].animated_sprite, rock_on_drake);
    if (i == OCTOPUS)
        sfSprite_setPosition(spells[i].animated_sprite, octopus_on_drake);
    if (i == EXPLOSION)
        sfSprite_setPosition(spells[i].animated_sprite, explosion_on_drake);
}
