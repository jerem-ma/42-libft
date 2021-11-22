# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 12:50:34 by jmaia             #+#    #+#              #
#    Updated: 2021/11/22 13:53:47 by jmaia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		cc ${CFLAGS} -I ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME)	:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean	:
		rm -f ${OBJS}

fclean	:	clean
		rm -f ${NAME}

re		:	fclean	${NAME}

.PHONY	:	all clean fclean re
