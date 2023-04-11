/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** txt_credit
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void create_rect_credit(menu_t *menu)
{
    menu->rect_name = sfRectangleShape_create();
    menu->size_rect_name.x = 1000;
    menu->size_rect_name.y = 925;
    menu->pos_rect_name.x = 350;
    menu->pos_rect_name.y = 80;

    sfRectangleShape_setSize(menu->rect_name, menu->size_rect_name);
    sfRectangleShape_setPosition(menu->rect_name, menu->pos_rect_name);
    sfRectangleShape_setFillColor(menu->rect_name,
    sfColor_fromRGBA(0, 0, 0, 100));
}

void create_txt_credit(menu_t *menu)
{
    sfVector2f pos = {500, 100};
    char *str = "Thank You For Playing\n\n\n\nDevelopment Team\n\n\n"
    "Yanis Harkouk\n\nVaea Seyed Saleh\n\nWilson Bordichon\n\nEva Legrand";
    menu->credit_name = sfText_create();
    sfText_setFont(menu->credit_name, menu->game_name_font);
    sfText_setString(menu->credit_name, str);
    sfText_setCharacterSize(menu->credit_name, 50);
    sfText_setPosition(menu->credit_name, pos);
    sfText_setColor(menu->credit_name, sfYellow);
}
