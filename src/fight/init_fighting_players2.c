/*
** MY_RPG PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "all_struct.h"

void init_turn_text(RPG_t *rpg)
{
    sfVector2f pos_turn_text = {780, 70};
    rpg->players_fighting.turn_text = sfText_create();
    sfText_setString (rpg->players_fighting.turn_text, "Your turn");
    sfText_setFont(rpg->players_fighting.turn_text, rpg->menu.game_name_font);
    sfText_setFillColor(rpg->players_fighting.turn_text, sfWhite);
    sfText_setPosition(rpg->players_fighting.turn_text, pos_turn_text);
    sfText_setCharacterSize(rpg->players_fighting.turn_text, 40);

}

void init_won_lost_text(RPG_t *rpg)
{
    sfVector2f pos_won_text = {820, 70};
    rpg->players_fighting.won_text = sfText_create();
    sfText_setString (rpg->players_fighting.won_text, "You won");
    sfText_setFont(rpg->players_fighting.won_text, rpg->menu.game_name_font);
    sfText_setFillColor(rpg->players_fighting.won_text, sfWhite);
    sfText_setPosition(rpg->players_fighting.won_text, pos_won_text);
    sfText_setCharacterSize(rpg->players_fighting.won_text, 40);
}

void init_damage_text(RPG_t *rpg)
{
    sfVector2f pos_player_damage_text = {644, 444};
    rpg->players_fighting.player_damage_text = sfText_create();
    sfText_setString (rpg->players_fighting.player_damage_text,
    my_int_to_str(0));
    sfText_setFont(rpg->players_fighting.player_damage_text,
    rpg->menu.game_number_font);
    sfText_setFillColor(rpg->players_fighting.player_damage_text, sfWhite);
    sfText_setPosition(rpg->players_fighting.player_damage_text,
    pos_player_damage_text);
    sfText_setCharacterSize(rpg->players_fighting.player_damage_text, 40);

    sfVector2f pos_damage_text = {1650, 480};
    rpg->players_fighting.enemy_damage_text =
    sfText_copy(rpg->players_fighting.player_damage_text);
    sfText_setPosition(rpg->players_fighting.enemy_damage_text,
    pos_damage_text);
}
