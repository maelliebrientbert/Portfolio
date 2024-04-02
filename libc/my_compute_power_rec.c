/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    int i = nb;

    if (p < 0) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    if (p == 1) {
        return i;
    }
    return (i = nb * my_compute_power_rec(nb, p - 1));
}
