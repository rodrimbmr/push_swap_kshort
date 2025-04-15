CFLAGS  = -Wall -Wextra -Werror -g
#-fsanitize=address,leak
NAME    = push_swap
CHEKER    = checker
LIB_DIR = 42_Libft
LIB_NAME = $(LIB_DIR)/libft.a
SRC     = $(wildcard *.c)
#CHECKER_SRC = checker.c checker_aux.c get_next_line.c get_next_line_utils.c \
sort_utils.c operations.c utils.c swap.c rotate.c reverse_rotate.c \
lst_indexed_ext.c lst_indexed.c indexes_utils.c cost.c
OBJ = $(SRC:.c=.o)
#CHECKER_OBJ = $(CHECKER_SRC:.c=.o)


all: $(LIB_NAME) $(NAME)

libft: $(LIB_NAME)
$(LIB_NAME):
	@make -C $(LIB_DIR)

$(NAME): $(OBJ) libft
	$(CC) $(CFLAGS) -o $@ $^ -l$(LIB_NAME) -lft

#$(CHEKER): $(CHECKER_OBJ)
#	$(CC) $(CFLAGS) -o $@ $^ -L$(LIB_DIR) -lft

#bonus: $(CHEKER)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIB_DIR) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@make -C $(LIB_DIR) clean

fclean: clean
	@rm -f $(NAME) $(CHEKER)
	@make -C $(LIB_DIR) fclean

re: fclean all

.PHONY: all clean fclean re libft
