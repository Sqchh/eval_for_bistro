/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** task01
*/

char *my_strcpy (char *dest, char const *src)
{
    int j = 0;
    for (; src[j] != '\0'; j++) {
        dest[j] = src[j];
    }
    dest[j] = '\0';
    return (dest);
}