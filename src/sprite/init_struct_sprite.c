/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_struct_sprite
*/

#include "sprite.h"

void init_struct_sprite(StructSprite *struct_sprite)
{
    struct_sprite->texture_sprite =
        sfTexture_createFromFile("textures/characters/Fumiko.png", NULL);
    struct_sprite->sprite = sfSprite_create();
    struct_sprite->rect = (sfIntRect){0, 0, 15, 30};
    sfSprite_setTexture(struct_sprite->sprite,
        struct_sprite->texture_sprite, sfTrue);
    sfSprite_setTextureRect(struct_sprite->sprite, struct_sprite->rect);
    sfSprite_setPosition(struct_sprite->sprite, (sfVector2f){950, 725});
    struct_sprite->clock = sfClock_create();
}

void init_grandma_sprite(StructSprite *struct_sprite)
{
    struct_sprite->grandma_txt =
        sfTexture_createFromFile("textures/characters/grandma_npc.png", NULL);
    struct_sprite->grandma_spt = sfSprite_create();
    sfSprite_setTexture(struct_sprite->grandma_spt,
    struct_sprite->grandma_txt, sfTrue);
    sfSprite_setPosition(struct_sprite->grandma_spt, (sfVector2f){150, 150});
}

void init_shaolin_sprite(StructSprite *struct_sprite)
{
    struct_sprite->shaolin_txt =
        sfTexture_createFromFile("textures/characters/shaolin.png", NULL);
    struct_sprite->shaolin_spt = sfSprite_create();
    sfSprite_setTexture(struct_sprite->shaolin_spt,
    struct_sprite->shaolin_txt, sfTrue);
    sfSprite_setPosition(struct_sprite->shaolin_spt, (sfVector2f){750, 380});
}
