NAME = push_swap
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = -L./libft -lft

all:	$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)
		
$(LIBFT):
			make all -C ./libft

clean:
			rm -rf $(OBJ)
			make clean -C ./libft	

fclean:		clean
			rm $(NAME)
			make fclean -C ./libft

re:			fclean all
