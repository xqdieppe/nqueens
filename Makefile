NAME = nqueens

CC = gcc
CFLAGS = -I includes/ -g3
SRC = sources/x.c \
	sources/y.c \
	sources/pos.c \
	sources/check_x.c \
	sources/check_y.c \
	sources/check_rdiag.c \
	sources/check_ldiag.c \
	sources/check_queen.c \
	sources/check_queens.c \
	sources/count_queens.c \
	sources/nqueens_recursive.c \
	sources/nqueens.c

NAME_SRC = main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(NAME_SRC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
