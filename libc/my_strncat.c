/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int j = my_strlen(dest);
    int i = 0;

    dest = my_strlen(dest) - 1 + nb;
    while (i != nb) {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}
