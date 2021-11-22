SRCS	=	$(addprefix srcs/,ft_isalpha.c,ft_isdigit.c,ft_isalnum,ft_isascii.c,
													ft_isprint.c,ft_strlen.c,ft_memset.c,ft_bzero.c,
													ft_memcpy.c,ft_memmove.c,ft_strlcpy.c,ft_strlcat.c,
													ft_toupper.c,ft_tolower.c,ft_strchr.c,ft_strrchr.c,
													ft_strncp.c,ft_memchr.c,ft_memcmp.c,ft_strnstr.c,
													ft_atoi.c,ft_calloc.c,ft_strdup.c)

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
