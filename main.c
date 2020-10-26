/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** main caller
*/

#include "include/my.h"
#include "include/eval.h"

int main (int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0) ;
    }
    return (84) ;
}
