/*
** MY_RPG PROJECT, 2023
** for_pull
** File description:
** is_double_click
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>

sfBool is_double_click(const sfEvent event)
{
    static sfClock* clock = NULL;
    static sfVector2i lastClickPos = {0, 0};

    clock = sfClock_create();
    if (event.type == sfEvtMouseButtonPressed
    && event.mouseButton.button == sfMouseLeft) {
        sfVector2i clickPos = {event.mouseButton.x, event.mouseButton.y};
        sfTime elapsed = sfClock_getElapsedTime(clock);
        sfInt32 elapsedTimeMs = sfTime_asMilliseconds(elapsed);
        if (clickPos.x == lastClickPos.x && clickPos.y == lastClickPos.y
        && elapsedTimeMs < 500) {
            return true;
        } else {
            lastClickPos = clickPos;
            sfClock_restart(clock);
            return false;
        }
    }
    return false;
}
