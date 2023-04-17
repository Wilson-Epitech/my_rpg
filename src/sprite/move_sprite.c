/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** move_sprite
*/

#include "sprite.h"
#include<stdio.h>

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

static void move_sprite_left_right(StructSprite *struct_sprite)
{
    static sfIntRect rect1 = {0, 97, 24, 32};
    static sfIntRect rect2 = {0, 32, 24, 32};

    if (sfKeyboard_isKeyPressed(sfKeyLeft)
    && (struct_sprite->sprite_pos.x + (-8)) > 0) {
        move_rect(&rect1, struct_sprite->clock);
        sfSprite_setTextureRect(struct_sprite->sprite, rect1);
        sfSprite_move(struct_sprite->sprite,
        (sfVector2f){-TAILLE_TILE / 4, 0});
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)
    && (struct_sprite->sprite_pos.x + (8)) < 1920) {
        move_rect(&rect2, struct_sprite->clock);
        sfSprite_setTextureRect(struct_sprite->sprite, rect2);
        sfSprite_move(struct_sprite->sprite,
        (sfVector2f){TAILLE_TILE / 4, 0});
    }
}

static void move_sprite_up_down(StructSprite *struct_sprite)
{
    static sfIntRect rect3 = {0, 0, 24, 32};
    static sfIntRect rect4 = {0, 64, 24, 32};

    if (sfKeyboard_isKeyPressed(sfKeyUp)
    && (struct_sprite->sprite_pos.y + (-8)) > 0) {
        move_rect(&rect3, struct_sprite->clock);
        sfSprite_setTextureRect(struct_sprite->sprite, rect3);
        sfSprite_move(struct_sprite->sprite,
        (sfVector2f){0, -TAILLE_TILE / 4});
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)
    && (struct_sprite->sprite_pos.y + (8)) < 1080) {
        move_rect(&rect4, struct_sprite->clock);
        sfSprite_setTextureRect(struct_sprite->sprite, rect4);
        sfSprite_move(struct_sprite->sprite,
        (sfVector2f){0, TAILLE_TILE / 4});
    }
}

void move_sprite(StructSprite *struct_sprite)
{
    move_sprite_left_right(struct_sprite);
    move_sprite_up_down(struct_sprite);
}
