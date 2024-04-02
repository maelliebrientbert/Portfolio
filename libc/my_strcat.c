/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src);
    char *res = (char *)malloc(dest_len + src_len + 1);

    for (int i = 0; i < dest_len; i++)
        res[i] = dest[i];
    for (int i = 0; i < src_len; i++)
        res[dest_len + i] = src[i];
    res[dest_len + src_len] = '\0';
    return res;
}
