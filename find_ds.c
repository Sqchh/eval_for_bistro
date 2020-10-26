/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** find index of digits and signs placements
*/

int is_sign(char c)
{
    if (c == 47 || c == 42 ||  c == 37 || c == 43 || c == 45)
        return (1);
    return (0);
}

int index_d1(int i, char const *src)
{
    int i_d1 = i - 1;

    for (;i_d1 > 0 && !is_sign(src[i_d1]); i_d1--);
    i_d1 = (i_d1 == 0) ? (0) : (i_d1 + 1);
    return (i_d1);
}

int index_d2(int i, char const *src)
{
    int i_d2 = i + 1;
    for (;src[i_d2] && !is_sign(src[i_d2]); i_d2++);
    return (i_d2);
}
