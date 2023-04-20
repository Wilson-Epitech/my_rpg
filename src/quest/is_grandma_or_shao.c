/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** is_grandma_or_shao
*/

#include "all_struct.h"

void is_grandma(sfRenderWindow *wdw, RPG_t *rpg)
{
    char *str_xp = NULL;
    char *str_level = NULL;

    if (rpg->quest.help == 0) {
        sfRenderWindow_drawText(wdw, rpg->quest.help_1, NULL);
        press_enter_help(rpg);
    }
    if (rpg->quest.help == 1) {
        rpg->quest.main_quest = 1;
        sfRenderWindow_drawText(wdw, rpg->quest.help_2, NULL);
        rpg->player.xp = 50;
        rpg->player.level = 1;
        str_xp = my_int_to_str(rpg->player.xp);
        sfText_setString(rpg->inventory_menu.xp, str_xp);
        str_level = my_int_to_str(rpg->player.level);
        sfText_setString(rpg->inventory_menu.level, str_level);
    }
}

void is_shao(sfRenderWindow *wdw, RPG_t *rpg)
{
    char *str_xp = NULL;
    char *str_level = NULL;

    if (rpg->quest.main_quest == 1) {
            sfRenderWindow_drawText(wdw, rpg->quest.main_quest_1, NULL);
            press_enter_main(rpg);
        }
    if (rpg->quest.main_quest == 2) {
        sfRenderWindow_drawText(wdw, rpg->quest.main_quest_2, NULL);
        rpg->player.xp = 150;
        rpg->player.level = 2;
        str_xp = my_int_to_str(rpg->player.xp);
        sfText_setString(rpg->inventory_menu.xp, str_xp);
        str_level = my_int_to_str(rpg->player.level);
        sfText_setString(rpg->inventory_menu.level, str_level);
    }
}
