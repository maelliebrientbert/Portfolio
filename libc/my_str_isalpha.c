/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_str_isalpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 48 && str[index] <= 57)
            return 1;
        if (str[index] >= 97 && str[index] <= 122)
            return 1;
        if (str[index] >= 65 && str[index] <= 90)
            return 1;
        else
            return 0;
        index++;
    }
}
