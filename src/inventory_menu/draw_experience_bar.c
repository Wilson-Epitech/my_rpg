/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** init_afk_def_txt
*/

#include "all_struct.h"

void draw_experience_bar(RPG_t *rpg)
{
    rpg->player.level_xp = rpg->player.level * 100;
    float xpbar_size = (float) rpg->player.xp / rpg->player.level_xp;
    sfVector2f size_xpbar = {350 * xpbar_size, 7};
    sfVector2f size_xpfullbar = {350, 7};

    sfRectangleShape_setSize(rpg->inventory_menu.xp_bar, size_xpbar);
    sfRectangleShape_setSize(rpg->inventory_menu.xp_fullbar, size_xpfullbar);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
    rpg->inventory_menu.xp_fullbar, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window.wdw,
    rpg->inventory_menu.xp_bar, NULL);
}
