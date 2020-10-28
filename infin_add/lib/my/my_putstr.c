/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** my_putchar
*/
void my_putchar(char c);

void my_putstr (char const *str)
{
    while ('\0' != *str) {
        my_putchar(*str);
        str++;
    }
}