/*
** MY_RPG PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <stdbool.h>
#include "all_struct.h"

sfBool is_spell_selected(RPG_t *rpg, sfSprite *spell,
sfRectangleShape *border, sfEvent event)
{
    static int state = 0;

    if (state != 1) {
        if (is_on_button(rpg, spell))
            sfRectangleShape_setOutlineColor(border, sfWhite);
        else
            sfRectangleShape_setOutlineColor(border, sfTransparent);
    }
    if (sfMouse_isButtonPressed(0) && is_on_button(rpg, spell))
        sfRectangleShape_setOutlineColor(border,
        sfColor_fromRGB(142, 198, 255));
    if (event.type == sfEvtMouseButtonReleased && is_on_button(rpg, spell)) {
        sfRectangleShape_setOutlineColor(border, sfColor_fromRGB(0, 127, 255));
        state = 1;
        return true;
    } else if (event.type == sfEvtMouseButtonReleased) {
        sfRectangleShape_setOutlineColor(border, sfTransparent);
        state = 0;
    }
    return false;
}

int check_spells_selection(RPG_t *rpg,
int launched, sfEvent event)
{
    for (int spell = 1; spell != NB_OF_SPELLS; spell++) {
        if (is_spell_selected(rpg, rpg->spells[spell].select_sprite,
            rpg->spells[spell].select_border, event)) {
            rpg->spells[spell].spell_state = 1;
            launched = spell;
        }
    }
    return launched;
}

void manage_fighting_event(RPG_t *rpg)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(rpg->window.wdw, &event)) {
        static int launched = 0;
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(rpg->window.wdw);
        }
        if (rpg->spells[launched].spell_state == -1) {
            launched = check_spells_selection(rpg, launched, event);
        }
    }

}
