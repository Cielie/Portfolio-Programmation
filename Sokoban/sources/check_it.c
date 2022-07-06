/*
** EPITECH PROJECT, 2022
** checking
** File description:
** checking players pos
*/

#include "../include/my.h"

player_pos *check_player_pos(player_pos *position, char **board)
{
    int i = 0, j = 0;

    for (i = 0; board[i] != NULL; i++) {
        for (j = 0; board[i][j] != '\0'; j++) {
            if (board[i][j] == 'P') {
                position->x = i;
                position->y = j;
                break;
            }
        }
    }
    return position;
}

char **check_spaces(player_pos *position, char **board, int k)
{
    board = check_right(position, board, k);
    board = check_left(position, board, k);
    board = check_up(position, board, k);
    board = check_down(position, board, k);

    return board;
}

char **check_obstacles(player_pos *position, char **map, int l)
{
    map = check_up_obs(position, map, l);
    map = check_r_obs(position, map, l);
    map = check_d_obs(position, map, l);
    map = check_l_obs(position, map, l);

    return map;
}

char **check_o_obstacles(player_pos *position, char **chart, int l)
{
    chart = check_upo_obs(position, chart, l);
    chart = check_ro_obs(position, chart, l);
    chart = check_do_obs(position, chart, l);
    chart = check_lo_obs(position, chart, l);

    return chart;
}
