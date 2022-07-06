/*
** EPITECH PROJECT, 2022
** obstacles checks
** File description:
** obstacles check
*/

#include "../include/my.h"

char **check_up_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_UP) {
        if (i - 2 < 0)
            return map;
        if (map[i - 2][j] == ' ' && map[i - 1][j] == 'X') {
            map[i - 2][j] = 'X';
            map[i - 1][j] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}

char **check_d_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_DOWN) {
        if (map[i + 2] == NULL)
            return map;
        if (map[i + 2][j] == ' ' && map[i + 1][j] == 'X') {
            map[i + 2][j] = 'X';
            map[i + 1][j] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}
