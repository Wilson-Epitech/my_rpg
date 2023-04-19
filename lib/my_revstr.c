/*
** MY_RPG PROJECT, 2022
** my_revstr.c
** File description:
** pool day06
*/

#include "my.h"

char *my_revstr(char *str)
{
    char temp;
    int length = my_strlen(str) - 1;

    for (int i = 0; i < length; i++) {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        length--;
    }
    return (str);
}
