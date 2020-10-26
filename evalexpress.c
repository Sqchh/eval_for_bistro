/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** mybc
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/eval.h"

char **get_op(char const *src, int i, char *res[4])
{
    int i_d1 = index_d1(i, src);
    int i_d2 = index_d2(i, src);
    int a = 0;

    res[1] = malloc(sizeof(char) * (i - i_d1) + 1);
    for (; i_d1 < i; i_d1++, a++)
        res[1][a] = src[i_d1];
    res[1][a] = '\0';
    res[2] = malloc(sizeof(char) * 1);
    res[2][0] = src[i];
    res[3] = malloc(sizeof(char) * (i_d2 - 1 - i));
    for (a = 0; i < i_d2 - 1; i++, a++)
        res[3][a] = src[i + 1];
    res[3][a] = '\0';
    return (res);
}

char int_conv(long res_op, int s_res)
{
    int nb = res_op / my_compute_power_rec(10, s_res - 1) % 10;

    char c = (nb < 0) ? '-' : nb + '0';
    return (c);
}

void replace_op(long res_op, int i, char *src)
{
    int i_d1 = index_d1(i, src);
    int i_d2 = index_d2(i, src);
    char *temp = malloc(sizeof(char) * my_strlen(&src[i_d2]) + 1);;
    long res_save = res_op;

    for (i = 0; src[i_d2]; i_d2++, i++)
        temp[i] = src[i_d2];
    temp[i] = '\0';
    for (i = res_save ? 0 : 1; res_save; i++)
        res_save /= 10;
    for (; i > 0; i--, i_d1++)
        src[i_d1] = int_conv(res_op, i);
    for (i = 0; temp[i]; i++, i_d1++)
        src[i_d1] = temp[i];
    src[i_d1] = '\0';
    free(temp);
}

void replace_para(char *dest, int start, char *src)
{
    int end = next_para(dest) + 2;
    char *temp = malloc(sizeof(char) * my_strlen(&dest[end]) + 1);
    int x = 0;

    for (; dest[end]; end++, x++)
        temp[x] = dest[end];
    temp[x] = '\0';
    for (int a = 0; src[a]; a++, start++)
        dest[start] = src[a];
    for (int b = 0; temp[b]; b++, start++)
        dest[start] = temp[b];
    dest[start] = '\0';
}

long my_rec_para(char *exp)
{
    int i_end = next_para(exp);
    int i_star = first_para(exp, i_end);
    int diff = i_end - i_star;
    char *op = malloc(sizeof(char) * diff + 1 - diff % 1 + 100);
    int i = 0;

    for (int a = 0; exp[a]; a++)
        if (is_sign(exp[a]))
            i += 1;
    if (!i) {
        free(op);
        return (my_getnbr(exp));
    }
    for (int a = i_star, i = 0; a < i_end + 1; a++, i++)
        op[i] = exp[a];
    do_mdm(op, diff);
    do_as(op, diff);
    replace_para(exp, i_star - 1, op);
    free(op);
    return (my_rec_para(exp));
}

int eval_expr(char const *src)
{
    int nb = 0;
    char *exp = malloc(sizeof(char) * my_strlen(src) + 2);

    my_initialise(src, exp);
    nb = my_rec_para(exp);
    free(exp);
    return (nb);
}
