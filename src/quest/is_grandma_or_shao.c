/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** is_grandma_or_shao
*/

#include "all_struct.h"

void manage_player_levels(RPG_t *rpg)
{
    rpg->player.level_xp = rpg->player.level * 100;
    if (rpg->player.xp >= rpg->player.level_xp) {
        rpg->player.level += 1;
        rpg->player.xp -= rpg->player.level_xp;
        rpg->player.atk += 6;
        rpg->player.def += 3;
    }
}

void is_grandma(RPG_t *rpg)
{
    char *str_xp = NULL;
    char *str_level = NULL;
    static int gain_xp = 0;
    if (rpg->quest.help == 0) {
        sfRenderWindow_drawText(rpg->window.wdw, rpg->quest.help_1, NULL);
        press_enter_help(rpg);
    }
    if (rpg->quest.help == 1) {
        rpg->quest.main_quest = 1;
        sfRenderWindow_drawText(rpg->window.wdw, rpg->quest.help_2, NULL);
        if (gain_xp == 0) {
            rpg->player.xp += 50;
            manage_player_levels(rpg);
            gain_xp += 1;
        }
        str_xp = my_int_to_str(rpg->player.xp);
        sfText_setString(rpg->inventory_menu.xp, str_xp);
        str_level = my_int_to_str(rpg->player.level);
        sfText_setString(rpg->inventory_menu.level, str_level);
    }
}

void is_shao(RPG_t *rpg)
{
    char *str_xp = NULL;
    char *str_level = NULL;
    static int gain_xp = 0;
    if (rpg->quest.main_quest == 1) {
        sfRenderWindow_drawText(rpg->window.wdw,
        rpg->quest.main_quest_1, NULL);
        press_enter_main(rpg);
    }
    if (rpg->quest.main_quest == 2) {
        sfRenderWindow_drawText(rpg->window.wdw, rpg->quest.main_quest_2, NULL);
        if (gain_xp == 0) {
            rpg->player.xp += 80;
            manage_player_levels(rpg);
            gain_xp += 1;
        }
        str_xp = my_int_to_str(rpg->player.xp);
        sfText_setString(rpg->inventory_menu.xp, str_xp);
        str_level = my_int_to_str(rpg->player.level);
        sfText_setString(rpg->inventory_menu.level, str_level);
    }
}
