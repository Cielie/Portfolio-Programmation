/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my_putstr
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int start = 0;

    while (str[start] != '\0') {
        my_putchar(str[start]);
        start++;
    }
    return (0);
}
