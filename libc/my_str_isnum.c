/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_str_isnum
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57) {
            return 1;
        } else {
            return 0;
        }
        i++;
    }
}
