/*
** EPITECH PROJECT, 2022
** condition checking
** File description:
** condition checking
*/

#include "../include/my.h"

char *put_o(char **board, char **tab)
{
    int i, j;

    for (i = 0; board[i] != NULL && tab[i] != NULL; i++)
        for (j = 0; board[i][j] != '\0' && tab[i][j] != '\0'; j++)
            check_an_ocond(board, tab, i, j);
}

char *check_an_ocond(char **board, char **tab, int i, int j)
{
    if (board[i][j] == ' ' && tab[i][j] == 'O')
        board[i][j] = 'O';
}
