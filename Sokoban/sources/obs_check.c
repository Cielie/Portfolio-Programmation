/*
** EPITECH PROJECT, 2022
** obstacles check]
** File description:
** obstacles check
*/

#include "../include/my.h"

char **check_r_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_RIGHT) {
        if ((map[i][j + 1] == 'X') && (map[i][j + 2] == ' ' || \
            map[i][j + 2] == 'O')) {
            map[i][j + 2] = 'X';
            map[i][j + 1] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}

char **check_l_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_LEFT) {
        if (j - 2 < 0)
            return map;
        if ((map[i][j - 2] == ' ' || map[i][j - 2] == 'O') \
            && map[i][j - 1] == 'X') {
            map[i][j - 2] = 'X';
            map[i][j - 1] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}
