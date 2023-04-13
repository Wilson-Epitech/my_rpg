/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** sprite
*/

#ifndef SPRITE_H_
    #define SPRITE_H_
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    typedef struct {
    sfTexture *texture_sprite;
    sfSprite *sprite;
    sfIntRect rect;
    sfClock *clock;
} StructSprite;

void init_struct_sprite(StructSprite *struct_sprite);
#endif /* !SPRITE_H_ */
