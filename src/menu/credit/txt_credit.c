/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** txt_credit
*/

#include "all_struct.h"

void create_rect_credit(RPG_t *rpg)
{
    rpg->menu.rect_name = sfRectangleShape_create();
    rpg->menu.size_rect_name.x = 1000;
    rpg->menu.size_rect_name.y = 925;
    rpg->menu.pos_rect_name.x = 350;
    rpg->menu.pos_rect_name.y = 80;

    sfRectangleShape_setSize(rpg->menu.rect_name, rpg->menu.size_rect_name);
    sfRectangleShape_setPosition(rpg->menu.rect_name, rpg->menu.pos_rect_name);
    sfRectangleShape_setFillColor(rpg->menu.rect_name,
    sfColor_fromRGBA(0, 0, 0, 100));
}

void create_txt_credit(RPG_t *rpg)
{
    sfVector2f pos = {500, 100};
    char *str = "Thank You For Playing\n\n\n\nDevelopment Team\n\n\n"
    "Yanis Harkouk\n\nVaea Seyed Saleh\n\nWilson Bordichon\n\nEva Legrand";
    rpg->menu.credit_name = sfText_create();
    sfText_setFont(rpg->menu.credit_name, rpg->menu.game_name_font);
    sfText_setString(rpg->menu.credit_name, str);
    sfText_setCharacterSize(rpg->menu.credit_name, 50);
    sfText_setPosition(rpg->menu.credit_name, pos);
    sfText_setColor(rpg->menu.credit_name, sfYellow);
}
