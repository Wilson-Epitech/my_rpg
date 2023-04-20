/*
** MY_RPG PROJECT, 2023
** struct_all
** File description:
** window
*/

#ifndef WINDOW_H_
    #define WINDOW_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    typedef struct window_s {
        sfRenderWindow *wdw;
        sfVideoMode mode;
} window_t;

#endif /* !WINDOW_H_ */
