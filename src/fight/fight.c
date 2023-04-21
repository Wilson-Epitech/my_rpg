/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "all_struct.h"

int end_fight(RPG_t *rpg, int end_it)
{
    sfVector2f set_player = {900, 540};
    sfVector2f set_drake = {800, 450};
    if (rpg->players_fighting.enemy_life_points <= 0 && end_it == 1) {
        set_attack_on_drake(rpg->spells, EXPLOSION);
        draw_spell(rpg, rpg->spells[EXPLOSION].animated_sprite,
        rpg->spells[EXPLOSION].animated_rect);
        end_it = launch_spell(rpg->fighting_map->spell_clock,
        &rpg->spells[EXPLOSION].animated_rect, rpg->spells[EXPLOSION].max_rect);
        sfSprite_setPosition(rpg->players_fighting.player_sprite, set_player);
    }
    if (rpg->players_fighting.player_life_points <= 0 && end_it == 1) {
        set_attack_on_player(rpg->spells, EXPLOSION);
        draw_spell(rpg, rpg->spells[EXPLOSION].animated_sprite,
        rpg->spells[EXPLOSION].animated_rect);
        end_it = launch_spell(rpg->fighting_map->spell_clock,
        &rpg->spells[EXPLOSION].animated_rect, rpg->spells[EXPLOSION].max_rect);
        sfSprite_setPosition(rpg->players_fighting.enemy_sprite, set_drake);
    }
    return end_it;
}

void fight2(RPG_t *rpg)
{
    sfTime time = sfClock_getElapsedTime(rpg->fighting_map->spell_clock);
    srand(time.microseconds);

    sfRenderWindow_drawText(rpg->window.wdw,
    rpg->players_fighting.turn_text, NULL);
    if (rpg->count.rounds % 2 == 0) {
        player_attack1(rpg);
    } else {
        ennemy_attack1(rpg);
    }
}

void fight(RPG_t *rpg)
{
    static int end_it = 1;

    if (rpg->players_fighting.enemy_life_points > 0 &&
    rpg->players_fighting.player_life_points > 0) {
        draw_fighting_elements(rpg);
        fight2(rpg);
        manage_fighting_event(rpg);
    } else {
        draw_fighting_elements(rpg);
        end_it = end_fight(rpg, end_it);
    }
}

void launch_fight(RPG_t *rpg)
{
    static int has_been_reset = 0;
    sfFloatRect rect = sfSprite_getGlobalBounds(rpg->fighting_map->map_sprite);

    if (rpg->menu.check_first_menu == 7) {
        if (has_been_reset == 0) {
            sfView_reset(rpg->map.view_combat, rect);
            sfView_zoom(rpg->map.view_combat, 0.93);
            sfRenderWindow_setView(rpg->window.wdw, rpg->map.view_combat);
            has_been_reset += 1;
        }
        fight(rpg);
    }
}
