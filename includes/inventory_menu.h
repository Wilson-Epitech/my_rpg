/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** inventory_menu
*/

#ifndef INVENTORY_MENU_H_
    #define INVENTORY_MENU_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    typedef struct {
        sfEvent evt;
        sfTexture *menu_texture;
        sfSprite *menu;
        int keyI_pressed;
        sfRectangleShape *rect_char_menu;
        sfText *stat;
        sfText *health;
        sfText *xp;
        sfText *atk;
        sfText *def;
        sfText *level;
    } InventoryMenu_t;

// void inventory_menu_func(sfRenderWindow *wdw, RPG_t *rpg);
// void init_inventory_menu(RPG_t *rpg);
// void destroy_inventory_menu(RPG_t *rpg);
// void press_inventory(InventoryMenu_t *inventory_menu);
#endif /* !INVENTORY_MENU_H_ */
