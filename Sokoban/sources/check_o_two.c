/*
** EPITECH PROJECT, 2022
** check o direction
** File description:
** replace o by x
*/

#include "../include/my.h"

char **check_upo_obs(player_pos *position, char **plan, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_UP) {
        if (i - 2 < 0)
            return plan;
        if (plan[i - 2][j] == 'O' && plan[i - 1][j] == 'X') {
            plan[i - 2][j] = 'X';
            plan[i - 1][j] = 'P';
            plan[i][j] = ' ';
        }
    }
    return plan;
}

char **check_do_obs(player_pos *position, char **plan, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_DOWN) {
        if (plan[i + 2] == NULL)
            return plan;
        if (plan[i + 2][j] == 'O' && plan[i + 1][j] == 'X') {
            plan[i + 2][j] = 'X';
            plan[i + 1][j] = 'P';
            plan[i][j] = ' ';
        }
    }
    return plan;
}
