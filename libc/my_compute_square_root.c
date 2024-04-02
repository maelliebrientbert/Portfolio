/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_compute_square_root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int root = -1;
    int square = 0;

    while (square < nb) {
        root++;
        square = root * root;
    }
    if (root * root == nb) {
        return root;
    } else {
        return 0;
    }
}
