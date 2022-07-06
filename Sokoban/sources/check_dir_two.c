/*
** EPITECH PROJECT, 2022
** check directions
** File description:
** check directions
*/

#include "../include/my.h"

char **check_right(player_pos *position, char **board, int k)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (k == KEY_RIGHT) {
        if (board[i][j + 1] == ' ') {
            board[i][j] = ' ';
            board[i][j + 1] = 'P';
        }
    }
    return board;
}

char **check_left(player_pos *position, char **board, int k)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (k == KEY_LEFT) {
        if (board[i][j - 1] == ' ') {
            board[i][j] = ' ';
            board[i][j - 1] = 'P';
        }
    }
    return board;
}
