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

void init_spell_text(RPG_t *rpg, int i)
{
    sfVector2f spell_score_pos_text = {200, 930};
    rpg->spells[i].spell_score = sfText_create();
    sfText_setString (rpg->spells[i].spell_score, rpg->spells[i].efficiency);
    sfText_setFont(rpg->spells[i].spell_score, rpg->menu.game_number_font);
    sfText_setFillColor(rpg->spells[i].spell_score, sfWhite);
    sfText_setPosition(rpg->spells[i].spell_score, spell_score_pos_text);
    sfText_setCharacterSize(rpg->spells[i].spell_score, 40);

    sfVector2f remaining_pos_text = {1400, 930};
    rpg->spells[i].remaining_uses = sfText_copy(rpg->spells[i].spell_score);
    sfText_setString (rpg->spells[i].remaining_uses, "remaining uses: ");
    sfText_setPosition(rpg->spells[i].remaining_uses, remaining_pos_text);

    sfVector2f max_launch_pos_text = {1700, 930};
    rpg->spells[i].max_launch_text = sfText_copy(rpg->spells[i].remaining_uses);
    sfText_setString(rpg->spells[i].max_launch_text,
    my_int_to_str(rpg->spells[i].max_launch_nb));
    sfText_setPosition(rpg->spells[i].max_launch_text, max_launch_pos_text);
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
    init_spell_text(rpg, i);
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
    init_fight_music1(rpg);
    init_fight_music2(rpg);
    sfVector2f pos_sprite = {720, 930};

    for (int i = 0; i != NB_OF_SPELLS; i++) {
        rpg->spells[i].spell_state = -1;
        init_spells1(rpg, i, pos_sprite);
        init_spells2(rpg, i, pos_sprite);
        init_spells3(rpg, i, pos_sprite);
        pos_sprite.x += 70;
    }

}
