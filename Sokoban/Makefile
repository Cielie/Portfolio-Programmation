##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	sources/my_putstr.c		\
		sources/my_putchar.c		\
		sources/usage.c			\
		sources/errors.c		\
		sources/count_my_line.c		\
		sources/sokoban.c		\
		sources/my_lincpy.c		\
		sources/check_it.c		\
		sources/check_it_two.c		\
		sources/my_put_nbr.c		\
		sources/check_dir_two.c		\
		sources/check_dir.c		\
		sources/obs_check.c		\
		sources/obs_check_two.c		\
		sources/my_file_loader.c	\
		sources/str_tab.c		\
		sources/my_strlen.c		\
		sources/check_o.c		\
		sources/check_o_two.c		\
		sources/check_ito.c		\
		sources/put_pono.c		\
		sources/check_ito_two.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(SRC) -g3 -lncurses

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
