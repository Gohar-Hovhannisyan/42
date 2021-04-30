SRCS		= 	$(shell find "./sources" -name "*.c") \
				$(shell find "./libft" -name "*.c") ft_printf.c
OBJS		= 	${SRCS:.c=.o}
NAME		= 	libftprintf.a
CC			= 	gcc
RM			= 	rm -f
CFLAGS		= 	-Wall -Wextra -Werror 
AR			= 	ar csr
LIBFT		=	./libft/libft.a
.c.o :
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) :		${OBJS}
				${MAKE} -C ./libft
				${MAKE} bonus -C ./libft
				${AR} ${NAME} ${OBJS}

all : 			${NAME}

clean :
				${MAKE} clean  -C ./libft
				${RM} ${OBJS} 

fclean : 		clean
				${MAKE} fclean -C ./libft
				${RM} ${NAME}

re : 			fclean all

.PHONY: 		all clean fclean re .c.o
