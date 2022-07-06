/*
** EPITECH PROJECT, 2022
** load file
** File description:
** load file
*/

#include "../include/my.h"

char *load_file_in_mem(char const *filepath)
{
    int fd, size, lec;
    char *buffer;

    struct stat m;
    stat(filepath, &m);
    fd = open(filepath, O_RDONLY);
    size = m.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    lec = read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return (buffer);
}
