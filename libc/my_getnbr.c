/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_getnbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int start = 0;

    while (str[start] < 48 || str[start] > 57) {
        start++;
    }
    if (start > "2147483647" || start < "-2147483648") {
        return 0;
    }
    while (start >= 48 && start <= 57 || start <= '\0') {
        start = start * 10 + start;
        start++;
    }
    if (str[start - 1] == '-' && str[start - 2] != '-') {
        start = start * (-1);
    } else {
        start = start * 1;
    }
    return start;
}
