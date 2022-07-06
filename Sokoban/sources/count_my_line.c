/*
** EPITECH PROJECT, 2021
** countmyline
** File description:
** countmyline
*/

#include "../include/my.h"

int nb_line(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n')
            j++;
        i++;
    }
    return (j);
}
