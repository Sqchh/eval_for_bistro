/*
** EPITECH PROJECT, 2020
** reverse_str.c
** File description:
** reverse_str
*/

#include <string.h>

char *reverse_str(char *str)
{
    int index = 0;
    int endword = strlen(str) - 1;
    char tmp;

    for (index = 0; index < strlen(str) / 2; index++, endword--) {
        tmp = str[endword];
        str[endword] = str[index];
        str[index] = tmp;
    }
    return (str);
}
