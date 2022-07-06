/*
** EPITECH PROJECT, 2022
** put p on o
** File description:
** put p on o
*/

#include "../include/my.h"

char **check_rp_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_RIGHT) {
        if ((map[i][j + 1] == 'O') && map[i][j] == 'P') {
            map[i][j + 1] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}

char **check_lp_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_LEFT) {
        if ((map[i][j - 1] == 'O') && map[i][j] == 'P') {
            map[i][j - 1] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}

char **check_dp_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_DOWN) {
        if ((map[i + 1][j] == 'O') && map[i][j] == 'P') {
            map[i + 1][j] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}

char **check_upp_obs(player_pos *position, char **map, int l)
{
    int i, j;
    i = position->x;
    j = position->y;

    if (l == KEY_UP) {
        if ((map[i - 1][j] == 'O') && map[i][j] == 'P') {
            map[i - 1][j] = 'P';
            map[i][j] = ' ';
        }
    }
    return map;
}
