/*
** EPITECH PROJECT, 2020
** infin_add.c
** File description:
** infin_add
*/

#include <unistd.h>
#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *malloc_result(char const *operand1, char const *operand2)
{
    int index = 0;
    int length = strlen(operand1) + strlen(operand2) + 1;
    char *tmp = malloc(sizeof(char) * length);

    for (index = 0; index < length; index++)
    tmp[index] = 0;
    return(tmp);

}
int my_atoi(char c)
{
    if (c >= '0' && c <= '9')
        return (c -'0');
    return (0);        
}

char *infinadd(char const *operand1, char const *operand2)
{
    int index = 0;
    int len1 = strlen(operand1) - 1;
    int len2 = strlen(operand2) - 1;
    int num1 = 0;
    int num2 = 0;
    int retenue = 0;
    char *result = malloc_result(operand1, operand2);

    for(; len1 >= 0 || len2 >= 0 || retenue != 0; len1--, len2--, index++) {
        num1 = (len1 >= 0) ? my_atoi(operand1[len1]) : 0;
        num2 = (len2 >= 0) ? my_atoi(operand2[len2]) : 0;
        result[index] = ((num1 + num2 + retenue) % 10) + '0';
        retenue = (num1 + num2 + retenue) / 10;
    }
    result = reverse_str(result);
    return (result);
}

int main(int ac, char const **av)
{
    char *result = NULL;

    if (ac != 3)
        return(84);
    result = infinadd(av[1], av[2]);
    my_putstr(result);
    my_putchar('\n');
    return (0);
    }
