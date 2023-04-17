/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** check_collision_map1
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "maps.h"

void check_next_col(StructSprite *struct_sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)
    && struct_sprite->sprite_pos.y - 0 > 0)
        struct_sprite->sprite_pos.y -= 0;
    if (sfKeyboard_isKeyPressed(sfKeyDown)
    && struct_sprite->sprite_pos.y + 50 < 1080)
        struct_sprite->sprite_pos.y += 50;
    if (sfKeyboard_isKeyPressed(sfKeyRight)
    && struct_sprite->sprite_pos.x + 20 < 1920)
        struct_sprite->sprite_pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft)
    && struct_sprite->sprite_pos.x - 20 > 0)
        struct_sprite->sprite_pos.x -= 20;
}

void check_next_uncol(StructSprite *struct_sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)
    && struct_sprite->sprite_pos.y - 0 > 0)
        struct_sprite->sprite_pos.y -= 0;
    if (sfKeyboard_isKeyPressed(sfKeyDown)
    && struct_sprite->sprite_pos.y + 50 < 1080)
        struct_sprite->sprite_pos.y += 50;
    if (sfKeyboard_isKeyPressed(sfKeyRight)
    && struct_sprite->sprite_pos.x + 20 < 1920)
        struct_sprite->sprite_pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft)
    && struct_sprite->sprite_pos.x - 20 > 0)
        struct_sprite->sprite_pos.x -= 20;
}

int check_color_col(StructSprite *struct_sprite, sfImage *img)
{
    sfColor col;

    check_next_col(struct_sprite);
    col = sfImage_getPixel(img, struct_sprite->sprite_pos.x,
    struct_sprite->sprite_pos.y);
    if (col.r > 5 && col.g > 5 && col.b > 5)
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        struct_sprite->sprite_pos.y += 0;
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        struct_sprite->sprite_pos.y -= 50;
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        struct_sprite->sprite_pos.x -= 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        struct_sprite->sprite_pos.x += 20;
    return 0;
}

int uncollision_char(StructSprite *struct_sprite, sfImage *img)
{
    sfColor col;

    check_next_uncol(struct_sprite);
    col = sfImage_getPixel(img, struct_sprite->sprite_pos.x,
    struct_sprite->sprite_pos.y);
    if (col.r > 5 && col.g > 5 && col.b > 5)
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        struct_sprite->sprite_pos.y += 0;
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        struct_sprite->sprite_pos.y -= 50;
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        struct_sprite->sprite_pos.x -= 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        struct_sprite->sprite_pos.x += 20;
    return 0;
}
