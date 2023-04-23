/*
** MY_RPG PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "all_struct.h"

void init_enemy_lifebar(RPG_t *rpg)
{
    sfVector2f size_lifebar = {200, 12};
    sfVector2f pos_enemy_lifebar = {380, 350};
    rpg->players_fighting.enemy_lifebar = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rpg->players_fighting.enemy_lifebar, sfGreen);
    sfRectangleShape_setOutlineThickness
    (rpg->players_fighting.enemy_lifebar, 2);
    sfRectangleShape_setOutlineColor(rpg->players_fighting.enemy_lifebar,
    sfWhite);
    sfRectangleShape_setSize(rpg->players_fighting.enemy_lifebar, size_lifebar);
    sfRectangleShape_setPosition(rpg->players_fighting.enemy_lifebar,
    pos_enemy_lifebar);
    rpg->players_fighting.enemy_fullbar =
    sfRectangleShape_copy(rpg->players_fighting.enemy_lifebar);
    sfRectangleShape_setFillColor(rpg->players_fighting.enemy_fullbar, sfWhite);
}

void init_player_lifebar(RPG_t *rpg)
{
    sfVector2f size_lifebar = {rpg->player.hp, 12};
    sfVector2f pos_player_lifebar = {1410, 350};

    rpg->players_fighting.player_lifebar = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rpg->players_fighting.player_lifebar,
    sfGreen);
    sfRectangleShape_setOutlineThickness
    (rpg->players_fighting.player_lifebar, 2);
    sfRectangleShape_setOutlineColor(rpg->players_fighting.player_lifebar,
    sfWhite);
    sfRectangleShape_setSize(rpg->players_fighting.player_lifebar,
    size_lifebar);
    sfRectangleShape_setPosition(rpg->players_fighting.player_lifebar,
    pos_player_lifebar);
    rpg->players_fighting.player_fullbar =
    sfRectangleShape_copy(rpg->players_fighting.player_lifebar);
    sfRectangleShape_setFillColor(rpg->players_fighting.player_fullbar,
    sfWhite);
}

void init_fighting_player(RPG_t *rpg)
{
    sfVector2f pos_player = {1450, 510};
    rpg->players_fighting.player_texture =
    sfTexture_createFromFile("textures/characters/Fumiko.png", NULL);
    rpg->players_fighting.player_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->players_fighting.player_sprite,
    rpg->players_fighting.player_texture, sfTrue);
    rpg->players_fighting.player_rect.top = 225;
    rpg->players_fighting.player_rect.left = 0;
    rpg->players_fighting.player_rect.width = 24;
    rpg->players_fighting.player_rect.height = 35;
    rpg->players_fighting.player_max_rect = 90;
    sfSprite_setTextureRect(rpg->players_fighting.player_sprite,
    rpg->players_fighting.player_rect);
    sfVector2f scale_sprite = {4, 4};
    sfSprite_scale(rpg->players_fighting.player_sprite, scale_sprite);
    sfSprite_setPosition(rpg->players_fighting.player_sprite, pos_player);
    rpg->players_fighting.player_attack = rpg->player.atk;
    rpg->players_fighting.player_def = rpg->player.def;
    rpg->players_fighting.player_life_points = rpg->player.hp;
}

void init_fighting_enemy(RPG_t *rpg)
{
    sfVector2f pos_enemy = {300, 380};
    sfVector2f scale_drake = {0.8, 0.8};
    rpg->players_fighting.enemy_texture =
    sfTexture_createFromFile("textures/fight/drake.png", NULL);
    rpg->players_fighting.enemy_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->players_fighting.enemy_sprite,
    rpg->players_fighting.enemy_texture, sfTrue);
    sfSprite_setScale(rpg->players_fighting.enemy_sprite, scale_drake);
    sfSprite_setPosition(rpg->players_fighting.enemy_sprite, pos_enemy);
    rpg->players_fighting.enemy_rect.top = 0;
    rpg->players_fighting.enemy_rect.left = 0;
    rpg->players_fighting.enemy_rect.width = 384;
    rpg->players_fighting.enemy_rect.height = 384;
    rpg->players_fighting.enemy_max_rect = 12288;
    rpg->players_fighting.enemy_attack = 25;
    rpg->players_fighting.enemy_def = 5;
    rpg->players_fighting.enemy_life_points = 200;

}

void init_fighting_players(RPG_t *rpg)
{
    init_fighting_player(rpg);
    init_fighting_enemy(rpg);
    init_turn_text(rpg);
    init_won_lost_text(rpg);
    init_damage_text(rpg);
    init_enemy_lifebar(rpg);
    init_player_lifebar(rpg);
}
