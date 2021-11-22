SRCS	=	$(addprefix srcs/,replace.c)

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CFLAGS	=	-Wall -Werror -Wextra

all		:	$(NAME)

.c.o	:
		gcc ${CFLAGS} -I ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME)	:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean	:
		rm -f ${OBJS}

fclean	:	clean
		rm -f ${NAME}

re		:	fclean	${NAME}

.PHONY	:	all clean fclean re
