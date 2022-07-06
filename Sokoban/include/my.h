/*
** EPITECH PROJECT, 2022
** my.h of sokoban
** File description:
** my.h of sokoban
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>
#include <stddef.h>
#include <string.h>

#ifndef MYMY_H_
    #define MYMY_H_

typedef struct pos {
    int x;
    int y;
}player_pos;

void usage(void);
int my_put_nbr(int nb);
void my_putchar(char c);
int errors(int ac, char **av);
int inv_map(int ac, char **av);
int my_putstr(char const *str);
int nb_line(char *str);
char *load_file_in_mem(char const *filepath);
char **stock_2d_array(char const *filepath);
char *my_lincpy(char *str);
player_pos *check_player_pos(player_pos *position, char **board);
int my_line_strlen(char *str);
char **str_board(char *filepath);
char **check_down(player_pos *position, char **board, int k);
char **check_dp_obs(player_pos *position, char **map, int l);
char **check_up(player_pos *position, char **board, int k);
char **check_p_ono(player_pos *position, char **plan, int l);
char **check_right(player_pos *position, char **board, int k);
char **check_left(player_pos *position, char **board, int k);
char **check_spaces(player_pos *position, char **board, int k);
char **check_up_obs(player_pos *position, char **map, int l);
char **check_upp_obs(player_pos *position, char **map, int l);
char **check_upo_obs(player_pos *position, char **plan, int l);
char **check_l_obs(player_pos *position, char **map, int l);
char **check_lp_obs(player_pos *position, char **map, int l);
char **check_lo_obs(player_pos *position, char **plan, int l);
char **check_d_obs(player_pos *position, char **map, int l);
char **check_do_obs(player_pos *position, char **plan, int l);
char **check_r_obs(player_pos *position, char **map, int l);
char **check_rp_obs(player_pos *position, char **map, int l);
char **check_ro_obs(player_pos *position, char **plan, int l);
char **check_obstacles(player_pos *position, char **map, int l);
char **check_o_obstacles(player_pos *position, char **chart, int l);
int my_strlen(char *str);
char *put_o(char **board, char **tab);
int counto(char **board);
int *check_o_pos(char **board);
char **check_all_cond(player_pos *position, char **plan, int k);
int op_wind(int ac, char **av);
int o_cond(char **board);
int o_posch(char **board);
char *check_an_ocond(char **board, char **tab, int i, int j);

#endif
