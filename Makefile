# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 12:50:34 by jmaia             #+#    #+#              #
#    Updated: 2021/11/24 15:58:11 by jmaia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
				ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

SRCS_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft+lstiter.c \
				ft_lstmap.c

OBJS		=	${SRCS:.c=.o}

OBJS_BONUS	=	${SRCS_BONUS:.c=o}

NAME		=	libft.a

CFLAGS		=	-Wall -Werror -Wextra

all		:	$(NAME)

.c.o	:
		cc ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME)	:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean	:
		rm -f ${OBJS}

fclean	:	clean
		rm -f ${NAME}

re		:	fclean	${NAME}

bonus	:	$(NAME) ${OBJS_BONUS}
	ar r libft.a ${OBJS_BONUS}

.PHONY	:	all clean fclean re bonus
