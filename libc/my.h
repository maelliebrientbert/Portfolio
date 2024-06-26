/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stddef.h>
int my_printf(const char *format, ...);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
char *my_strdup(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);
char **my_str_to_word_array(char *str, char *separator);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int array_len(char **buf);
void free_array(char **aray);
char *my_strncat(char *dest, char const *src, int nb);
int my_str_isprintable(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
int my_getnbr(char const *str);
int my_find_prime_sup(int nb);
int my_compute_power_rec(int nb, int p);
#endif /*!MY_H_*/
