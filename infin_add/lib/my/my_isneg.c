/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** isneg
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int x)
{ 
    if (x >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}