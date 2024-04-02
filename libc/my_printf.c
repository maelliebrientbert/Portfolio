/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-miniprintf-gabriel.destremont
** File description:
** mini_printf
*/

#include "my.h"

void flag_gestion2(char format_char, int *written_chars, va_list info_params)
{
    char *str;

    if (format_char == 's') {
        str = (char *)va_arg(info_params, char *);
        my_putstr(str);
        (*written_chars) += my_strlen(str);
    } else if (format_char == '%') {
        my_putchar('%');
        (*written_chars)++;
    }
}

int flag_gestion(const char *format, va_list info_params,
    int *written_chars)
{
    int i;
    char c;
    char format_char = *format;

    if (format_char == 'd' || format_char == 'i') {
        i = (int)va_arg(info_params, int);
        my_put_nbr(i);
        while (i != 0) {
            i /= 10;
            (*written_chars)++;
        }
    } else if (format_char == 'c') {
        c = (char)va_arg(info_params, int);
        my_putchar(c);
        (*written_chars)++;
    } else {
        flag_gestion2(format_char, written_chars, info_params);
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list info_params;
    int written_chars = 0;

    va_start(info_params, format);
    for (char currentChar; (currentChar = *format);) {
        format++;
        if (currentChar != '%') {
            my_putchar(currentChar);
            written_chars++;
            continue;
        }
        flag_gestion(format, info_params, &written_chars);
        format++;
    }
    va_end(info_params);
    return written_chars;
}
