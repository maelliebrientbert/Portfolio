/*
** EPITECH PROJECT, 2024
** delivery
** File description:
** array_len
*/

#include "my.h"

int array_len(char **buf)
{
    int count = 0;

    for (int i = 0; buf[i] != NULL; i++) {
        count ++;
    }
    return count;
}
