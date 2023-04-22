/*
** MY_RPG PROJECT, 2023
** rpg_d
** File description:
** quit
*/

#include "all_struct.h"

void launch_won_song(RPG_t *rpg)
{
    static int launch_sound = 0;
    static int launch_song = 0;

    if (launch_sound == 0) {
        sfMusic_stop(rpg->fighting_map->fight_music);
        sfMusic_play(rpg->fighting_map->won_sound);
        launch_sound += 1;
    }
    if (sfMusic_getStatus(rpg->fighting_map->won_sound) != sfPlaying
        && launch_song == 0) {
        sfMusic_play(rpg->fighting_map->won_song);
        launch_song += 1;
    }
}

void launch_lost_song(RPG_t *rpg)
{
    static int launch_song = 0;

    if (launch_song == 0) {
        sfMusic_stop(rpg->fighting_map->fight_music);
        sfMusic_play(rpg->fighting_map->lost_song);
        launch_song += 1;
    }
}

void launch_end_song(RPG_t *rpg)
{
    if (rpg->players_fighting.enemy_life_points <= 0) {
        launch_won_song(rpg);
    } else {
        launch_lost_song(rpg);
    }
}

void quit_fight(RPG_t *rpg)
{
    sfVector2f scale = {1, 1};
    sfVector2f pos_txt = {850, 815};
    sfVector2f pos = {750, 750};
    sfText_setPosition(rpg->menu.quit, pos_txt);
    sfSprite_setPosition(rpg->menu.button_quit_spr, pos);
    sfSprite_setScale(rpg->menu.button_quit_spr, scale);
    sfText_setCharacterSize(rpg->menu.quit, 65);
    sfRenderWindow_drawSprite(rpg->window.wdw,
    rpg->menu.button_quit_spr, NULL);
    sfRenderWindow_drawText(rpg->window.wdw,
    rpg->menu.quit, NULL);
    hover_quit(rpg);
    click_quit(rpg);
}

int end_fight(RPG_t *rpg, int end_it)
{
    sfVector2f set_player = {900, 540};
    sfVector2f set_drake = {800, 450};
    if (rpg->players_fighting.enemy_life_points <= 0 && end_it == 1) {
        set_attack_on_drake(rpg->spells, EXPLOSION);
        draw_spell(rpg, rpg->spells[EXPLOSION].animated_sprite,
        rpg->spells[EXPLOSION].animated_rect);
        end_it = animate_explosion(rpg->fighting_map->spell_clock,
        &rpg->spells[EXPLOSION].animated_rect, rpg->spells[EXPLOSION].max_rect);
        sfSprite_setPosition(rpg->players_fighting.player_sprite, set_player);
    }
    if (rpg->players_fighting.player_life_points <= 0 && end_it == 1) {
        set_attack_on_player(rpg->spells, EXPLOSION);
        draw_spell(rpg, rpg->spells[EXPLOSION].animated_sprite,
        rpg->spells[EXPLOSION].animated_rect);
        end_it = animate_explosion(rpg->fighting_map->spell_clock,
        &rpg->spells[EXPLOSION].animated_rect, rpg->spells[EXPLOSION].max_rect);
        sfSprite_setPosition(rpg->players_fighting.enemy_sprite, set_drake);
    }
    quit_fight(rpg);
    return end_it;
}
