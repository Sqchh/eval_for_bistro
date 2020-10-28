/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** task04
*/

int my_compute_power_rec(int nb, int p)
{

    if (p == 0 || p > 13) {
        return (1);
    }
    if (p < 1) {
        return (1);
    }
    return (nb * my_compute_power_rec(nb, p -1));
}