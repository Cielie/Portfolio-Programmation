/*
** EPITECH PROJECT, 2022
** checking o
** File description:
** filling the o with the x
*/

#include "../include/my.h"

char **check_ro_obs(player_pos *position, char **plan, int l)
{
    int i, j, k, q;
    i = position->x;
    j = position->y;

    if (l == KEY_RIGHT) {
        if (j + 2 > 0)
            return plan;
        if (plan[i][j + 2] == 'O' && plan[i][j + 1] == 'X') {
            plan[i][j + 1] = 'P';
            plan[i][j + 2] = 'X';
            plan[i][j] = ' ';
        }
    }
    return plan;
}

char **check_lo_obs(player_pos *position, char **plan, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_LEFT) {
        if (j - 2 < 0)
            return plan;
        if (plan[i][j - 2] == 'O' && plan[i][j - 1] == 'X') {
            plan[i][j - 2] = 'X';
            plan[i][j - 1] = 'P';
            plan[i][j] = ' ';
        }
    }
    return plan;
}
