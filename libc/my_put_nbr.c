/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_put_nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int nb_1;

    nb_1 = 1;
    if (nb == -2147483648)
        my_putstr("-2147483648");
    else {
        if (nb < 0) {
            my_putchar('-');
            nb = nb * (-1);
        }
        while ((nb / nb_1) >= 10)
            nb_1 = nb_1 * 10;
        while (nb_1 > 0) {
            my_putchar((nb / nb_1) % 10 + '0');
            nb_1 /= 10;
        }
    }
    return 0;
}
