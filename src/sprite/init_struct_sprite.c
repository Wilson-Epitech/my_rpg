/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_struct_sprite
*/

#include "all_struct.h"

void init_struct_sprite(RPG_t *rpg)
{
    sfVector2f scale = {1.7, 1.7};

    rpg->struct_sprite.texture_sprite =
        sfTexture_createFromFile("textures/characters/Fumiko.png", NULL);
    rpg->struct_sprite.sprite = sfSprite_create();
    rpg->struct_sprite.rect = (sfIntRect){0, 0, 20, 30};
    sfSprite_setTexture(rpg->struct_sprite.sprite,
        rpg->struct_sprite.texture_sprite, sfTrue);
    sfSprite_setTextureRect(rpg->struct_sprite.sprite, rpg->struct_sprite.rect);
    sfSprite_setScale(rpg->struct_sprite.sprite, scale);
    sfSprite_setPosition(rpg->struct_sprite.sprite, (sfVector2f){950, 725});
    rpg->struct_sprite.clock = sfClock_create();
}

void init_grandma_sprite(RPG_t *rpg)
{
    rpg->struct_sprite.grandma_txt =
        sfTexture_createFromFile("textures/characters/grandma_npc.png", NULL);
    rpg->struct_sprite.grandma_spt = sfSprite_create();
    sfSprite_setTexture(rpg->struct_sprite.grandma_spt,
    rpg->struct_sprite.grandma_txt, sfTrue);
    sfSprite_setPosition(rpg->struct_sprite.grandma_spt,
    (sfVector2f){150, 150});
}

void init_shaolin_sprite(RPG_t *rpg)
{
    rpg->struct_sprite.shaolin_txt =
        sfTexture_createFromFile("textures/characters/shaolin.png", NULL);
    rpg->struct_sprite.shaolin_spt = sfSprite_create();
    sfSprite_setTexture(rpg->struct_sprite.shaolin_spt,
    rpg->struct_sprite.shaolin_txt, sfTrue);
    sfSprite_setPosition(rpg->struct_sprite.shaolin_spt,
    (sfVector2f){750, 380});
}
