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

void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2);
char *my_revstr(char *str);
char *my_int_to_str(int nb);

void open_wdw(history_t *history, menu_t *menu, maps_t *map,
StructSprite *struct_sprite, quest_t *quest,
InventoryMenu_t *inventory_menu);
void destroy_all(history_t *history, menu_t *menu, maps_t *map,
StructSprite *struct_sprite, quest_t *quest);

#endif /* !MY_H_ */
