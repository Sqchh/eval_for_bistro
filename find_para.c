/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** finds para
*/

int first_para(char const *src, int end)
{
    for(; src[end] != '(' && src[end]; end--);
    return (end + 1);
}

int next_para(char const *src)
{
    int i_end = 0;
    for (; src[i_end] != ')' && src[i_end]; i_end++);
    return (i_end - 1);
}

void my_initialise(char const *src, char *dest)
{
    int a = 0;
    dest[0] = '(';
    for (; src[a]; a++)
        dest[a + 1] = src[a];
    dest[a + 1] = ')';
}
