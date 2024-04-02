/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 32 && str[index] <= 127) {
            return 1;
        } else {
            return 0;
        }
        index++;
    }
}
