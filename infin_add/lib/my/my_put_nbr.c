/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{       
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        my_putchar(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (0);
}