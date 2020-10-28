/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int	x;

    x =	*a;
    *a = *b;
    *b = x;
}