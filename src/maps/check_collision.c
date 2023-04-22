/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** check_collision_map1
*/

#include "all_struct.h"

void check_next_col(RPG_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)
    && rpg->struct_sprite.sprite_pos.y + 10 > 0)
        rpg->struct_sprite.sprite_pos.y += 10;
    if (sfKeyboard_isKeyPressed(sfKeyDown)
    && rpg->struct_sprite.sprite_pos.y + 150 < 1080)
        rpg->struct_sprite.sprite_pos.y += 150;
    if (sfKeyboard_isKeyPressed(sfKeyRight)
    && rpg->struct_sprite.sprite_pos.x + 20 < 1920)
        rpg->struct_sprite.sprite_pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft)
    && rpg->struct_sprite.sprite_pos.x - 20 > 0)
        rpg->struct_sprite.sprite_pos.x -= 20;
}

void check_next_uncol(RPG_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)
    && rpg->struct_sprite.sprite_pos.y + 10 > 0)
        rpg->struct_sprite.sprite_pos.y += 10;
    if (sfKeyboard_isKeyPressed(sfKeyDown)
    && rpg->struct_sprite.sprite_pos.y + 50 < 1080)
        rpg->struct_sprite.sprite_pos.y += 50;
    if (sfKeyboard_isKeyPressed(sfKeyRight)
    && rpg->struct_sprite.sprite_pos.x + 20 < 1920)
        rpg->struct_sprite.sprite_pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft)
    && rpg->struct_sprite.sprite_pos.x - 20 > 0)
        rpg->struct_sprite.sprite_pos.x -= 20;
}

int check_color_col(RPG_t *rpg, sfImage *img)
{
    sfColor col;

    check_next_col(rpg);
    if (rpg->struct_sprite.sprite_pos.x > 0 &&
    rpg->struct_sprite.sprite_pos.x < 1920 &&
    rpg->struct_sprite.sprite_pos.y > 0 &&
    rpg->struct_sprite.sprite_pos.y < 1080)
        col = sfImage_getPixel(img, rpg->struct_sprite.sprite_pos.x,
    rpg->struct_sprite.sprite_pos.y);
    if (col.r > 5 && col.g > 5 && col.b > 5)
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        rpg->struct_sprite.sprite_pos.y -= 10;
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        rpg->struct_sprite.sprite_pos.y -= 150;
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        rpg->struct_sprite.sprite_pos.x -= 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        rpg->struct_sprite.sprite_pos.x += 20;
    return 0;
}

int uncollision_char(RPG_t *rpg, sfImage *img)
{
    sfColor col;

    check_next_uncol(rpg);
    if (rpg->struct_sprite.sprite_pos.x > 0
    && rpg->struct_sprite.sprite_pos.x < 1920
    && rpg->struct_sprite.sprite_pos.y > 0
    && rpg->struct_sprite.sprite_pos.y < 1080)
        col = sfImage_getPixel(img, rpg->struct_sprite.sprite_pos.x,
    rpg->struct_sprite.sprite_pos.y);
    if (col.r > 5 && col.g > 5 && col.b > 5)
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        rpg->struct_sprite.sprite_pos.y += 10;
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        rpg->struct_sprite.sprite_pos.y -= 50;
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        rpg->struct_sprite.sprite_pos.x -= 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        rpg->struct_sprite.sprite_pos.x += 20;
    return 0;
}
