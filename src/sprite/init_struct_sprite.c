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
        sfTexture_createFromFile("src/sprite/Fumiko.png", NULL);
    struct_sprite->sprite = sfSprite_create();
    struct_sprite->rect = (sfIntRect){0, 0, 15, 30};
    sfSprite_setTexture(struct_sprite->sprite,
        struct_sprite->texture_sprite, sfTrue);
    sfSprite_setTextureRect(struct_sprite->sprite, struct_sprite->rect);
    sfSprite_setPosition(struct_sprite->sprite, (sfVector2f){600, 50    });
    struct_sprite->clock = sfClock_create();
}
