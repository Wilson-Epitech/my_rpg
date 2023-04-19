/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** my
*/


#ifndef MY_H_
    #define MY_H_

    #include "menu.h"
    #include "maps.h"
    #include "quest.h"
    #include "inventory_menu.h"

typedef struct game_s {
    sfEvent event;
} game_t;

void open_wdw(history_t *history, menu_t *menu, maps_t *map,
StructSprite *struct_sprite, quest_t *quest,
InventoryMenu_t *inventory_menu);
void destroy_all(history_t *history, menu_t *menu, maps_t *map,
StructSprite *struct_sprite, quest_t *quest);

#endif /* !MY_H_ */
