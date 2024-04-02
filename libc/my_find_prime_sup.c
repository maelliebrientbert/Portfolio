/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_find_prime_sup
*/

int div_by_number(int nb)
{
    while (nb % 2 != 0 && nb % 3 != 0 && nb % 5 != 0 && nb % 7 != 0) {
        if (nb % 2 == 0) {
            nb++;
        }
        if (nb % 3 == 0) {
            nb++;
        }
        if (nb % 5 == 0) {
            nb++;
        }
        if (nb % 7 == 0) {
            nb++;
        }
    }
    return nb;
}

int my_find_prime_sup(int nb)
{
    if (nb == 2 || nb == 3 || nb == 5 || nb == 7) {
        return nb;
    } else {
        div_by_number(nb);
    }
}
