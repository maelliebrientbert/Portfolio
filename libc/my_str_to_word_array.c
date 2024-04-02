/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_str_to_word_array
*/

#include "my.h"

int is_separator(char c, char *separator)
{
    int i = 0;

    while (separator[i] != '\0') {
        if (separator[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

int is_word_begin(char *str, int i, char *separator)
{
    if (is_separator(str[i], separator) == 1) {
        return 0;
    }
    if (i == 0) {
        return 1;
    }
    if (is_separator(str[i - 1], separator)) {
        return 1;
    } else {
        return 0;
    }
}

char *my_store_word(char *str, char *separator)
{
    char *result;
    int i = 0;

    while (str[i] != '\0' && is_separator(str[i], separator) == 0) {
        i++;
    }
    result = malloc((i + 1) * sizeof(char));
    i = 0;
    while (str[i] != '\0' && is_separator(str[i], separator) == 0) {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return result;
}

char **my_str_to_word_array(char *str, char *separator)
{
    int nb_words = 0;
    char **result;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_word_begin(str, i, separator)) {
            nb_words++;
        }
    }
    result = malloc((nb_words + 1) * sizeof(char *));
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_word_begin(str, i, separator)) {
            result[j] = my_store_word(str + i, separator);
            j++;
        }
    }
    result[nb_words] = NULL;
    return result;
}
