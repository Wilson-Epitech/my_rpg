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

void enemy_attack2(RPG_t *rpg)
{
    set_attack_on_player(rpg->spells, rpg->count.rand_spell);
    draw_spell(rpg, rpg->spells[rpg->count.rand_spell].animated_sprite,
    rpg->spells[rpg->count.rand_spell].animated_rect);
    sfRenderWindow_drawText(rpg->window.wdw,
    rpg->players_fighting.enemy_damage_text, NULL);

    launch_spell(rpg->fighting_map->spell_clock,
    &rpg->players_fighting.enemy_rect,
    rpg->players_fighting.enemy_max_rect);


    if (launch_spell(rpg->fighting_map->spell_clock,
    &rpg->spells[rpg->count.rand_spell].animated_rect,
    rpg->spells[rpg->count.rand_spell].max_rect) == -1) {
        rpg->players_fighting.enemy_rect.top = 0;
        rpg->count.rounds += 1;
    }
}

void ennemy_attack1(RPG_t *rpg)
{
    static int damage = 0;

    if (rpg->count.enemy_rounds == 0) {
        rpg->count.rand_attack = rand() % rpg->players_fighting.enemy_attack;
        damage = damage_causen(rpg->count.rand_attack,
        rpg->players_fighting.player_def);
        sfText_setString(rpg->players_fighting.enemy_damage_text,
        my_int_to_str(damage));
        rpg->count.enemy_rounds += 1;
    }
    sfText_setString (rpg->players_fighting.turn_text, "Enemy turn");
    enemy_attack2(rpg);
    if (rpg->count.rounds % 2 == 0) {
        rpg->players_fighting.player_life_points -= damage;
        rpg->count.player_rounds = 0;
    }
}
