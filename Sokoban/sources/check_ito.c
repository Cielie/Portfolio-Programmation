/*
** EPITECH PROJECT, 2022
** get o position
** File description:
** get o position
*/

#include "../include/my.h"

int o_cond(char **board)
{
    int i = 0, a = 0, b = 0;

    if (board[a][b] == 'O')
        i++;
}

int counto(char **board)
{
    int a = 0, b = 0, i = 0;

    for (a = 0; board[a] != NULL; a++) {
        for (b = 0; board[a][b] != '\0'; b++) {
            o_cond(board);
        }
    }
    return i;
}

int o_posch(char **board)
{
    int a = 0, b = 0, c = 0;
    int *stock_pos = malloc(sizeof(int) * (counto(board) * 2));

    if (board[a][b] == 'O') {
        stock_pos[2 * c] = a;
        stock_pos[(2 * c) + 1] = b;
        c++;
    }
}

int *check_o_pos(char **board)
{
    int a = 0, b = 0, c = 0;
    int *stock_pos = malloc(sizeof(int) * (counto(board) * 2));

    for (a = 0; board[a] != NULL; a++) {
        for (b = 0; board[a][b] != '\0'; b++) {
            o_posch(board);
        }
    }
    return stock_pos;
}
