/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *result;
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    result = malloc((i + 1) * sizeof(char));
    i = 0;
    while (str[i] != '\0') {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return result;
}
