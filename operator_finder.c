/*
** EPITECH PROJECT, 2020
** operator_finder.c
** File description:
** operator_finder
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/eval.h"

void do_mdm(char *src, int diff)
{
    int i = 0;
    long res_op = 0;
    char c = 0;
    char *res[4];

    for (; i < diff && src[i]; i++) {
        c = src[i];
        if (c == 47 || c == 42 || c == 37) {
            res_op = do_op(get_op(src, i, res));
            free(res[1]);
            free(res[2]);
            free(res[3]);
            res_op = res_op < 0 ? -res_op : res_op;
            replace_op(res_op, i, src);
            i = 0;
        }
    }
}

void do_as(char *src, int diff)
{
    int i = 0;
    long res_op = 0;
    char c = 0;
    char *res[4];

    for (; i < diff && src[i]; i++) {
        c = src[i];
        if (c == 43 || c == 45) {
            res_op = do_op(get_op(src, i, res));
            free(res[1]);
            free(res[2]);
            free(res[3]);
            res_op = res_op < 0 ? -res_op : res_op;
            replace_op(res_op, i, src);
            i = 0;
        }
    }
}
