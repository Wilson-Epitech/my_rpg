/*
** MY_RPG PROJECT, 2022
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/Graphics.h>

typedef struct {
    sfTexture *map_texture;
    sfSprite *map_sprite;
    sfClock *spell_clock;
} FightingMap;

typedef struct {
    sfTexture *select_texture;
    sfSprite *select_sprite;
    sfRectangleShape *select_border;
    sfTexture *animated_texture;
    sfSprite *animated_sprite;
    sfIntRect animated_rect;
    int max_rect;
    int spell_state;
} FightingSpells;

typedef struct {
    sfText *turn_text;
    sfText *won_text;
    sfTexture *player_texture;
    sfSprite *player_sprite;
    sfIntRect player_rect;
    sfRectangleShape *player_lifebar;
    sfRectangleShape *player_fullbar;
    int player_max_rect;
    int player_attack;
    int player_life_points;
    sfText *player_damage_text;
    sfTexture *enemy_texture;
    sfSprite *enemy_sprite;
    sfIntRect enemy_rect;
    sfRectangleShape *enemy_lifebar;
    sfRectangleShape *enemy_fullbar;
    int enemy_max_rect;
    int enemy_attack;
    int enemy_life_points;
    sfText *enemy_damage_text;
} PlayersFighting;

typedef struct {
    int rand_spell;
    int rounds;
    int rand_attack;
    int player_rounds;
    int enemy_rounds;
} CountRounds;

enum spell {
    EXPLOSION,
    OCTOPUS,
    FIREFLOWER,
    TORNADO,
    ROCK,
    THUNDERBOLT,
    NB_OF_SPELLS
};

#endif
