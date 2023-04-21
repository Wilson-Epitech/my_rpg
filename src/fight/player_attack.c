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

int player_attack3(RPG_t *rpg, int i)
{
    set_attack_on_drake(rpg->spells, i);
    draw_spell(rpg, rpg->spells[i].animated_sprite,
    rpg->spells[i].animated_rect);
    sfRenderWindow_drawText(rpg->window.wdw,
    rpg->players_fighting.player_damage_text, NULL);

    animate_player(rpg->fighting_map->spell_clock,
    &rpg->players_fighting.player_rect,
    rpg->players_fighting.player_max_rect);


    rpg->spells[i].spell_state = launch_spell(rpg->fighting_map->spell_clock,
    &rpg->spells[i].animated_rect, rpg->spells[i].max_rect);

    if (rpg->spells[i].spell_state == -1) {
        rpg->players_fighting.player_rect.left = 0;
        return rand() % (NB_OF_SPELLS - 2) + 2;
    }

    return (-1);
}

int player_attack2(RPG_t *rpg)
{
    for (int i = 1; i != NB_OF_SPELLS; i++) {
        if (rpg->spells[i].spell_state == 1) {
            return player_attack3(rpg, i);
        }
    }
    return (-1);
}

void player_attack1(RPG_t *rpg)
{
    if (rpg->count.player_rounds == 0) {
        rpg->count.rand_attack = rand() % rpg->players_fighting.player_attack;
        sfText_setString(rpg->players_fighting.player_damage_text,
        my_int_to_str(rpg->count.rand_attack));
        rpg->count.player_rounds += 1;
    }
    sfText_setString (rpg->players_fighting.turn_text, "Your turn");
    rpg->count.rand_spell = player_attack2(rpg);
    if (rpg->count.rand_spell != -1) {
        rpg->players_fighting.enemy_life_points -= rpg->count.rand_attack;
        rpg->count.enemy_rounds = 0;
        rpg->count.rounds += 1;
    }
}
