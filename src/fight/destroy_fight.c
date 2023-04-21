/*
** MY_RPG PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "all_struct.h"

static void free_players(RPG_t *rpg)
{
    sfSprite_destroy(rpg->players_fighting.player_sprite);
    sfSprite_destroy(rpg->players_fighting.enemy_sprite);
}

static void free_map_and_spells(RPG_t *rpg)
{

    sfSprite_destroy(rpg->spells[0].animated_sprite);
    sfTexture_destroy(rpg->spells[0].animated_texture);
    for (int i = 1; i != NB_OF_SPELLS; i++) {
        sfSprite_destroy(rpg->spells[i].animated_sprite);
        sfSprite_destroy(rpg->spells[i].select_sprite);
        sfTexture_destroy(rpg->spells[i].animated_texture);
        sfTexture_destroy(rpg->spells[i].select_texture);
    }

    sfSprite_destroy(rpg->fighting_map->map_sprite);
    sfTexture_destroy(rpg->fighting_map->map_texture);
}

void destroy_fight(RPG_t *rpg)
{
    free_players(rpg);
    free_map_and_spells(rpg);
}
