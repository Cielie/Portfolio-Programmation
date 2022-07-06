/*
** EPITECH PROJECT, 2022
** str to tab
** File description:
** str to tab
*/

#include "../include/my.h"

char **str_board(char *filepath)
{
    int i = 0, d = 1;
    char *str = load_file_in_mem(filepath);
    char **board = malloc(sizeof(char*) * (nb_line(str) + 2));
    board[0] = my_lincpy(str);
    int len = my_strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == '\n') {
            i++;
            if (str[i] == '\0')
                break;
            board[d] = my_lincpy(&str[i]);
            d++;
        }
    }
    board[d] = NULL;
    return board;
}
