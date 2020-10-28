/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** task02
*/
char *my_strncpy (char *dest, char const *src, int n) {
    int j = 0;
    for (; j != n; j++) {
        dest[j] = src[j];
    }
    dest[j] = '\0';
    return (dest);
}