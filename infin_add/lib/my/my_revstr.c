/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** task03
*/
int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char c;
    int j;
    j = my_strlen(str) - 1;
    for (int i = 0; i < j; i++, j--)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    return (str);
}