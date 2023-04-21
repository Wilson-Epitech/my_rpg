/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include "fighting.h"
#include "all_struct.h"

void init_fighting_map(RPG_t *rpg)
{
    rpg->fighting_map->spell_clock = sfClock_create();
    rpg->fighting_map->map_texture =
    sfTexture_createFromFile("textures/fight/fighting_map.png", NULL);
    rpg->fighting_map->map_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->fighting_map->map_sprite,
    rpg->fighting_map->map_texture, sfTrue);
}

void init_spell_selection(RPG_t *rpg, int i,
char *path, sfVector2f pos_sprite)
{
    rpg->spells[i].select_texture = sfTexture_createFromFile(path, NULL);
    rpg->spells[i].select_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->spells[i].select_sprite,
    rpg->spells[i].select_texture, sfTrue);
    sfSprite_setPosition(rpg->spells[i].select_sprite, pos_sprite);

    sfVector2f scale_border = {60, 60};
    rpg->spells[i].select_border = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rpg->spells[i].select_border, sfTransparent);
    sfRectangleShape_setOutlineThickness(rpg->spells[i].select_border, 5);
    sfRectangleShape_setOutlineColor(rpg->spells[i].select_border,
    sfTransparent);
    sfRectangleShape_setSize(rpg->spells[i].select_border, scale_border);
    sfRectangleShape_setPosition(rpg->spells[i].select_border, pos_sprite);
}

void init_animated_spell(RPG_t *rpg, int i, int width, int height)
{
    rpg->spells[i].animated_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->spells[i].animated_sprite,
    rpg->spells[i].animated_texture, sfTrue);

    rpg->spells[i].animated_rect.top = 0;
    rpg->spells[i].animated_rect.left = 0;
    rpg->spells[i].animated_rect.width = width;
    rpg->spells[i].animated_rect.height = height;

    sfVector2f scale = {1.4, 1.4};
    sfSprite_setScale(rpg->spells[i].animated_sprite, scale);
}

void init_map_and_spells(RPG_t *rpg)
{
    init_fighting_map(rpg);
    sfVector2f pos_sprite = {790, 930};

    for (int i = 0; i != NB_OF_SPELLS; i++) {
        rpg->spells[i].spell_state = -1;
        init_spells1(rpg, i, pos_sprite);
        init_spells2(rpg, i, pos_sprite);
        init_spells3(rpg, i, pos_sprite);
        pos_sprite.x += 70;
    }

}
