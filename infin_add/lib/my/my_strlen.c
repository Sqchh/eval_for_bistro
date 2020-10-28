/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** Day04
*/

int my_strlen(char const *str)
{
    int count;
    count = 0;

    while ('\0' != *str) {
        str++;
        count++;
    }

    return (count);
}