/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** move_sprite
*/

#include "sprite.h"
#include<stdio.h>
#define TAILLE_TILE 32

static void move_rect(sfIntRect *rect, sfClock *clock)
{
    sfTime time;
    float seconds;
    int max_value = 130;
    int offset = 24;

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.1) {
        rect->left = rect->left + offset;
        sfClock_restart(clock);
    }
    if (rect->left >= max_value) {
        rect->left = 48;
    }
}

//left top width height
static sfIntRect rect1 = {0, 97, 24, 32};
static sfIntRect rect2 = {0, 32, 24, 32};
static sfIntRect rect3 = {0, 0, 24, 32};
static sfIntRect rect4 = {0, 64, 24, 32};

static int move_sprite_left_right(sfEvent event, StructSprite *struct_sprite)
{
    if (event.type == sfEvtKeyPressed) {
        switch (event.key.code) {
            case sfKeyLeft:
                move_rect(&rect1, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect1);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){-TAILLE_TILE / 4, 0});
                break;
            case sfKeyRight:
                move_rect(&rect2, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect2);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){TAILLE_TILE / 4, 0});
                break;
            default:
                return 0;
        }
    }
    return 0;
}

static int move_sprite_up_down(sfEvent event, StructSprite *struct_sprite)
{
    if (event.type == sfEvtKeyPressed) {
        switch (event.key.code) {
            case sfKeyUp:
                move_rect(&rect3, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect3);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){0, -TAILLE_TILE / 4});
                break;
            case sfKeyDown:
                move_rect(&rect4, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect4);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){0, TAILLE_TILE / 4});
                break;
            default:
                return 0;
        }
    }
    return 0;
}

void move_sprite(sfEvent event, StructSprite *struct_sprite)
{
    move_sprite_left_right(event, struct_sprite);
    move_sprite_up_down(event, struct_sprite);
}
