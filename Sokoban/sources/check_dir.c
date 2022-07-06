/*
** EPITECH PROJECT, 2022
** check directions
** File description:
** check directions
*/

#include "../include/my.h"

char **check_up(player_pos *position, char **board, int k)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (k == KEY_UP) {
        if (board[i - 1][j] == ' ') {
            board[i][j] = ' ';
            board[i - 1][j] = 'P';
        }
    }
    return board;
}

char **check_down(player_pos *position, char **board, int k)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (k == KEY_DOWN) {
        if (board[i + 1][j] == ' ') {
            board[i][j] = ' ';
            board[i + 1][j] = 'P';
        }
    }
    return board;
}
