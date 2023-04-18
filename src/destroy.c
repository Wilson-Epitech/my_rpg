/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** destroy
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"
#include "maps.h"
#include "sprite.h"
#include "quest.h"

void destroy_all(history_t *history, menu_t *menu, maps_t *map,
StructSprite *struct_sprite, quest_t *quest)
{
    destroy_history(history);
    destroy_menu(menu);
    destroy_maps(map);
    destroy_quest(struct_sprite, quest);
}
