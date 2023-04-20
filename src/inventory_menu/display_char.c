/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** display_char
*/

#include "all_struct.h"

void init_rect_characteristic(RPG_t *rpg)
{
    sfVector2f pos = {600, 200};
    sfVector2f size = {400, 600};

    rpg->inventory_menu.rect_char_menu = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rpg->inventory_menu.rect_char_menu,
    sfColor_fromRGB(85, 75, 75));
    sfRectangleShape_setPosition(rpg->inventory_menu.rect_char_menu, pos);
    sfRectangleShape_setSize(rpg->inventory_menu.rect_char_menu, size);
}

void init_text_stat(RPG_t *rpg)
{
    sfVector2f pos = {650, 250};

    char *str = "\n                          stat\n\n\n\n Health \n\n\n XP "
    "\n\n\n Level \n\n\n Defense \n\n\n Attack \n\n";
    rpg->inventory_menu.stat = sfText_create();
    sfText_setFont(rpg->inventory_menu.stat, rpg->menu.game_name_font);
    sfText_setString(rpg->inventory_menu.stat, str);
    sfText_setCharacterSize(rpg->inventory_menu.stat, 20);
    sfText_setPosition(rpg->inventory_menu.stat, pos);
    sfText_setColor(rpg->inventory_menu.stat, sfYellow);
}

void init_health_txt(RPG_t *rpg)
{
    char *str_health = my_int_to_str(rpg->player.hp);
    sfVector2f pos_health = {900, 350};

    rpg->inventory_menu.health = sfText_create();
    sfText_setFont(rpg->inventory_menu.health, rpg->menu.game_number_font);
    sfText_setString(rpg->inventory_menu.health, str_health);
    sfText_setCharacterSize(rpg->inventory_menu.health, 40);
    sfText_setPosition(rpg->inventory_menu.health, pos_health);
    sfText_setColor(rpg->inventory_menu.health, sfYellow);
}

void init_xp_txt(RPG_t *rpg)
{
    char *str_xp = my_int_to_str(rpg->player.xp);
    sfVector2f pos_xp = {900, 430};

    rpg->inventory_menu.xp = sfText_create();
    sfText_setFont(rpg->inventory_menu.xp, rpg->menu.game_number_font);
    sfText_setString(rpg->inventory_menu.xp, str_xp);
    sfText_setCharacterSize(rpg->inventory_menu.xp, 40);
    sfText_setPosition(rpg->inventory_menu.xp, pos_xp);
    sfText_setColor(rpg->inventory_menu.xp, sfYellow);
}

void init_level_txt(RPG_t *rpg)
{
    char *str_level = my_int_to_str(rpg->player.level);
    sfVector2f pos_level = {900, 500};

    rpg->inventory_menu.level = sfText_create();
    sfText_setFont(rpg->inventory_menu.level, rpg->menu.game_number_font);
    sfText_setString(rpg->inventory_menu.level, str_level);
    sfText_setCharacterSize(rpg->inventory_menu.level, 40);
    sfText_setPosition(rpg->inventory_menu.level, pos_level);
    sfText_setColor(rpg->inventory_menu.level, sfYellow);

}
