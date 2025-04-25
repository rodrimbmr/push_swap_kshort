CFLAGS  = -Wall -Wextra -Werror -I$(LIB_DIR) -g
#-fsanitize=address,leak
NAME    = push_swap

LIB_DIR = 42_Libft
LIB_NAME = $(LIB_DIR)/libft.a
SRC     = $(wildcard *.c) $(wildcard utils/*.c)
#CHECKER_SRC = checker.c checker_aux.c get_next_line.c get_next_line_utils.c \
sort_utils.c operations.c utils.c swap.c rotate.c reverse_rotate.c \
lst_indexed_ext.c lst_indexed.c indexes_utils.c cost.c
OBJ = $(SRC:.c=.o)
#CHECKER_OBJ = $(CHECKER_SRC:.c=.o)


all: $(NAME)

$(LIB_NAME):
	@make -C $(LIB_DIR)

$(NAME): $(LIB_NAME) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIB_NAME) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C $(LIB_DIR) fclean
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
