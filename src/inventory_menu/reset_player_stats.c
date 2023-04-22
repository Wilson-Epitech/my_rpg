/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** reset_player_stat
*/

#include "all_struct.h"

void reset_player_stats(RPG_t *rpg)
{
    char *str_def = my_int_to_str(rpg->player.def);
    char *str_atk = my_int_to_str(rpg->player.atk);

    sfText_setString(rpg->inventory_menu.atk, str_atk);
    sfText_setString(rpg->inventory_menu.def, str_def);
}
