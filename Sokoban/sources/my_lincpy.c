/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** my_strcpy
*/

#include "../include/my.h"

int my_line_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    return i;
}

char *my_lincpy(char *str)
{
    int j = 0;
    int a = 0;
    char *dest = malloc(sizeof(char) * (my_line_strlen(str) + 1));

    while (str[j] != '\0' && str[j] != '\n') {
        dest[a] = str[j];
        j++;
        a++;
    }
    dest[a] = '\0';
    return dest;
}
