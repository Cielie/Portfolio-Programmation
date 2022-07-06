/*
** EPITECH PROJECT, 2022
** errors
** File description:
** errors
*/

#include "../include/my.h"

int errors(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            usage();
            return 0;
        }
        else
            return 0;
    }
    return 84;
}

int inv_map(int ac, char **av)
{
    int i = 0, j = 0, k = 0, m = 0;
    char *str = load_file_in_mem(av[1]);

    while (str[i] != '\0') {
        if (str[i] != 'O' && str[i] != 'P' &&
            str[i] != 'X' && str[i] != ' ' && str[i] != '#' &&
            str[i] != '\n')
            return 84;
        if (str[i] == 'P')
            j++;
        if (str[i] == 'O')
            k++;
        if (str[i] == 'X')
            m++;
        i++;
    }
    if (j != 1)
        return 84;
    if (k < m)
        return 84;
}
