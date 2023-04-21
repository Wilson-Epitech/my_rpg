/*
** MY_RPG PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "fighting.h"
#include "all_struct.h"


void draw_enemy_lifebar(RPG_t *rpg)
{
    sfVector2f size_lifebar = {rpg->players_fighting.enemy_life_points, 12};
    sfRectangleShape_setSize(rpg->players_fighting.enemy_lifebar, size_lifebar);
    if (rpg->players_fighting.enemy_life_points > 80
    && rpg->players_fighting.enemy_life_points < 140) {
        sfRectangleShape_setFillColor(rpg->players_fighting.enemy_lifebar,
        sfColor_fromRGB(255, 114, 0));
    }
    if (rpg->players_fighting.enemy_life_points < 80) {
        sfRectangleShape_setFillColor(rpg->players_fighting.enemy_lifebar,
        sfRed);
    }
    if (rpg->players_fighting.enemy_life_points > 0
    && rpg->players_fighting.player_life_points > 0) {
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->players_fighting.enemy_fullbar, NULL);
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->players_fighting.enemy_lifebar, NULL);
    }
}

void draw_player_lifebar(RPG_t *rpg)
{
    sfVector2f size_lifebar = {rpg->players_fighting.player_life_points, 12};
    sfRectangleShape_setSize(rpg->players_fighting.player_lifebar,
    size_lifebar);
    if (rpg->players_fighting.player_life_points > 80
    && rpg->players_fighting.player_life_points < 140) {
        sfRectangleShape_setFillColor(rpg->players_fighting.player_lifebar,
        sfColor_fromRGB(255, 114, 0));
    }
    if (rpg->players_fighting.player_life_points < 80) {
        sfRectangleShape_setFillColor(rpg->players_fighting.player_lifebar,
        sfRed);
    }
    if (rpg->players_fighting.player_life_points > 0
    && rpg->players_fighting.enemy_life_points > 0) {
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->players_fighting.player_fullbar, NULL);
        sfRenderWindow_drawRectangleShape(rpg->window.wdw,
        rpg->players_fighting.player_lifebar, NULL);
    }
}

void draw_fighting_elements(RPG_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window.wdw,
    rpg->fighting_map->map_sprite, NULL);
    draw_players(rpg);
    draw_spell_selections(rpg);
    draw_text(rpg);
    draw_enemy_lifebar(rpg);
    draw_player_lifebar(rpg);
}
