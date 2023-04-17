/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** sprite
*/


#ifndef SPRITE_H_
    #define SPRITE_H_

    #define TAILLE_TILE 32
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

typedef struct {
    sfTexture *texture_sprite;
    sfSprite *sprite;
    sfIntRect rect;
    sfClock *clock;
    sfVector2f sprite_pos;
    int save_key;
} StructSprite;

void init_struct_sprite(StructSprite *struct_sprite);
void move_sprite(StructSprite *struct_sprite);
void get_pos_char(StructSprite *struct_sprite);

#endif /* !SPRITE_H_ */
