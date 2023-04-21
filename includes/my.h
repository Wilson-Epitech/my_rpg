/*
** MY_RPG PROJECT, 2023
** my_rpg
** File description:
** my
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef MY_H_
    #define MY_H_

char *my_int_to_str(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2);
int my_getnbr(char const *str);
char **word_array_delimiter(char const *str, char *delim);

int is_delimiter(char c, char *delim);
int cut_str(char const *str, char *delim);
int check_character(char const *str, char *delim, int cut_here);
#endif /* !MY_H_ */
