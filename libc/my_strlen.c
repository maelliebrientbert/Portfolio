/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
