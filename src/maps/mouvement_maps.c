/*
** MY_RPG PROJECT, 2023
** rpg_eva
** File description:
** mouvement_maps
*/

#include "maps.h"
#include "quest.h"

static void draw_map1(sfRenderWindow *wdw,
maps_t *map, StructSprite *struct_sprite, quest_t *quest)
{
    if (map->on_map == MAP1) {
        sfRenderWindow_drawSprite(wdw, map->map1_spr, NULL);
        sfRenderWindow_drawSprite(wdw, struct_sprite->grandma_spt, NULL);
        talk_to_grandma(quest, wdw);
        get_color_map1(map, struct_sprite, quest);
        return;
    }
}

static void draw_map2(sfRenderWindow *wdw,
maps_t *map, StructSprite *struct_sprite)
{
    if (map->on_map == MAP2) {
        sfRenderWindow_drawSprite(wdw, map->map2_spr, NULL);
        get_color_map2(map, struct_sprite);
        return;
    }
}

static void draw_map3(sfRenderWindow *wdw,
maps_t *map, StructSprite *struct_sprite, quest_t *quest)
{
    if (map->on_map == MAP3) {
        sfRenderWindow_drawSprite(wdw, map->map3_spr, NULL);
        sfRenderWindow_drawSprite(wdw, struct_sprite->shaolin_spt, NULL);
        talk_to_shaolin(quest, wdw);
        get_color_map3(map, struct_sprite, quest);
        return;
    }
}

static void draw_map4_map5(sfRenderWindow *wdw,
maps_t *map, StructSprite *struct_sprite, menu_t *menu)
{
    if (map->on_map == MAP4) {
        sfRenderWindow_drawSprite(wdw, map->map4_spr, NULL);
        get_color_map4(map, struct_sprite);
        return;
    }
    if (map->on_map == MAP5) {
        sfRenderWindow_drawSprite(wdw, map->map5_spr, NULL);
        get_color_map5(wdw, map, struct_sprite, menu);
        return;
    }
}

void draw_current_map(sfRenderWindow *wdw,
maps_t *map, StructSprite *struct_sprite, quest_t *quest, menu_t *menu)
{
    draw_map1(wdw, map, struct_sprite, quest);
    draw_map2(wdw, map, struct_sprite);
    draw_map3(wdw, map, struct_sprite, quest);
    draw_map4_map5(wdw, map, struct_sprite, menu);
}
