/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include "fighting.h"
#include "all_struct.h"

void init_spells1(RPG_t *rpg, int i, sfVector2f pos_sprite)
{
    if (i == FIREFLOWER) {
        rpg->spells[i].efficiency = "Efficiency : 1/3";
        rpg->spells[i].max_launch_nb = 15;
        init_spell_selection(rpg, i,
        "textures/fight/select_fireflower.png", pos_sprite);
        rpg->spells[i].animated_texture = sfTexture_createFromFile
        ("textures/fight/animated_fireflower.png", NULL);
        init_animated_spell(rpg, i, 204, 219);
        rpg->spells[i].max_rect = 2628;
    }
    if (i == TORNADO) {
        rpg->spells[i].efficiency = "Efficiency : 2/3";
        rpg->spells[i].max_launch_nb = 6;
        init_spell_selection(rpg, i,
        "textures/fight/select_tornado.png", pos_sprite);
        rpg->spells[i].animated_texture = sfTexture_createFromFile
        ("textures/fight/animated_tornado.png", NULL);
        init_animated_spell(rpg, i, 96, 124);
        rpg->spells[i].max_rect = 1240;
    }
}

void init_spells2(RPG_t *rpg, int i, sfVector2f pos_sprite)
{
    if (i == ROCK) {
        rpg->spells[i].efficiency = "Efficiency : 1/3";
        rpg->spells[i].max_launch_nb = 15;
        init_spell_selection(rpg, i,
        "textures/fight/select_rock.png", pos_sprite);
        rpg->spells[i].animated_texture = sfTexture_createFromFile
        ("textures/fight/animated_rock.png", NULL);
        init_animated_spell(rpg, i, 208, 117);
        rpg->spells[i].max_rect = 1521;
    }
    if (i == THUNDERBOLT) {
        rpg->spells[i].efficiency = "Efficiency : 2/3";
        rpg->spells[i].max_launch_nb = 6;
        init_spell_selection(rpg, i,
        "textures/fight/select_thunderbolt.png", pos_sprite);
        rpg->spells[i].animated_texture = sfTexture_createFromFile
        ("textures/fight/animated_thunderbolt.png", NULL);
        init_animated_spell(rpg, i, 63, 238);
        rpg->spells[i].max_rect = 2618;
    }
}

void init_spells3(RPG_t *rpg, int i, sfVector2f pos_sprite)
{
    if (i == OCTOPUS) {
        rpg->spells[i].efficiency = "Efficiency : 3/3";
        rpg->spells[i].max_launch_nb = 2;
        init_spell_selection(rpg, i,
        "textures/fight/select_octopus.png", pos_sprite);
        rpg->spells[i].animated_texture = sfTexture_createFromFile
        ("textures/fight/animated_octopus.png", NULL);
        init_animated_spell(rpg, i, 304, 268);
        rpg->spells[i].max_rect = 4556;
        sfVector2f scale = {1, 1};
        sfSprite_setScale(rpg->spells[i].animated_sprite, scale);
    }
    if (i == EXPLOSION) {
        rpg->spells[i].animated_texture = sfTexture_createFromFile
        ("textures/fight/explosion.png", NULL);
        init_animated_spell(rpg, i, 267, 225);
        rpg->spells[i].max_rect = 1800;
        sfVector2f scale = {2, 2};
        sfSprite_setScale(rpg->spells[i].animated_sprite, scale);
    }
}

void init_fight_music1(RPG_t *rpg)
{
    rpg->fighting_map->fight_music
    = sfMusic_createFromFile("textures/music/fight_song.ogg");
    sfMusic_setVolume(rpg->fighting_map->fight_music, rpg->menu.volume);
    sfMusic_setLoop(rpg->fighting_map->fight_music, sfTrue);
    rpg->fighting_map->won_sound
    = sfMusic_createFromFile("textures/music/won_sound.ogg");
    sfMusic_setVolume(rpg->fighting_map->won_sound, rpg->menu.volume);
    rpg->fighting_map->won_song
    = sfMusic_createFromFile("textures/music/won_song.ogg");
    sfMusic_setVolume(rpg->fighting_map->won_song, rpg->menu.volume);
    sfMusic_setLoop(rpg->fighting_map->won_song, sfTrue);
    rpg->fighting_map->lost_song
    = sfMusic_createFromFile("textures/music/lost_song.ogg");
    sfMusic_setVolume(rpg->fighting_map->lost_song, rpg->menu.volume);
    sfMusic_setLoop(rpg->fighting_map->lost_song, sfTrue);
}

void init_fight_music2(RPG_t *rpg)
{
    rpg->fighting_map->select_spell
    = sfMusic_createFromFile("textures/music/spell_selected.ogg");
    sfMusic_setVolume(rpg->fighting_map->select_spell, rpg->menu.volume_effect);
    rpg->fighting_map->ennemy_encoutered
    = sfMusic_createFromFile("textures/music/ennemy_encountered.ogg");
    sfMusic_setVolume(rpg->fighting_map->ennemy_encoutered,
    rpg->menu.volume_effect);
}
