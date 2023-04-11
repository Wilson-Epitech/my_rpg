/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"
#include "menu.h"

int main(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    open_wdw(menu);
    return 0;
}
