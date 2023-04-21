/*
** MY_RPG PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "all_struct.h"

void draw_spell(RPG_t *rpg, sfSprite *spell_sprite, sfIntRect spell_rect)
{
    sfSprite_setTextureRect(spell_sprite, spell_rect);
    sfRenderWindow_drawSprite(rpg->window.wdw, spell_sprite, NULL);

}

void draw_players(RPG_t *rpg)
{
    sfSprite_setTextureRect(rpg->players_fighting.enemy_sprite,
    rpg->players_fighting.enemy_rect);
    sfSprite_setTextureRect(rpg->players_fighting.player_sprite,
    rpg->players_fighting.player_rect);

    if (rpg->players_fighting.player_life_points > 0)
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->players_fighting.player_sprite, NULL);
    if (rpg->players_fighting.enemy_life_points > 0)
        sfRenderWindow_drawSprite(rpg->window.wdw,
        rpg->players_fighting.enemy_sprite, NULL);
}

void draw_spell_selections(RPG_t *rpg)
{
    if (rpg->players_fighting.player_life_points > 0
    && rpg->players_fighting.enemy_life_points > 0) {
        for (int i = 1; i != NB_OF_SPELLS; i++) {
            sfRenderWindow_drawSprite(rpg->window.wdw,
            rpg->spells[i].select_sprite, NULL);
            sfRenderWindow_drawRectangleShape(rpg->window.wdw,
            rpg->spells[i].select_border, NULL);
        }
    }
}

void draw_text(RPG_t *rpg)
{
    if (rpg->players_fighting.enemy_life_points <= 0) {
        sfRenderWindow_drawText(rpg->window.wdw,
        rpg->players_fighting.won_text, NULL);
        sfText_setString (rpg->players_fighting.won_text, "You won");
    } else if (rpg->players_fighting.player_life_points <= 0) {
        sfText_setString (rpg->players_fighting.won_text, "You lost");
        sfRenderWindow_drawText(rpg->window.wdw,
        rpg->players_fighting.won_text, NULL);
    }
}
