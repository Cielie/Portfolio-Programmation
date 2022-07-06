/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#include "../include/my.h"

int op_wind(int ac, char **av)
{
    int a, i = 0;
    char **st = str_board(av[1]);
    player_pos *pos = malloc(sizeof(player_pos));
    char **str = str_board(av[1]);
    while (1) {
        for (a = 0; st[a] != NULL; a++)
            mvprintw(a, 0, st[a]);
        pos = check_player_pos(pos, st);
        refresh();
        keypad(stdscr, TRUE);
        i = getch();
        if (i == 32)
            st = str_board(av[1]);
        st = check_all_cond(pos, st, i);
        put_o(st, str);
    }
}

int main(int ac, char **av)
{
    if (errors(ac, av) == 84)
        return 84;
    if (inv_map(ac, av) == 84)
        return 84;
    WINDOW *screen;
    initscr();
    noecho();
    refresh();
    op_wind(ac, av);
    endwin();
}
