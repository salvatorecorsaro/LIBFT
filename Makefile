# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 18:16:55 by scorsaro          #+#    #+#              #
#    Updated: 2019/11/21 18:08:09 by scorsaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c  ft_strnstr.c ft_strncmp.c ft_atoi.c\
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_strcat.c libft.h ft_strtrim.c ft_strrchr.c



#BONUS = ft_lstadd_back_bonus.c \#
	#	ft_lstadd_front_bonus.c \#
	#	ft_lstclear_bonus.c  \#
	#	ft_lstdelone_bonus.c \#
	#	ft_lstiter_bonus.c \#
	#	ft_lstlast_bonus.c \#
	#	ft_lstmap_bonus.c \#
	#	ft_lstnew_bonus.c \#
	#	ft_lstsize_bonus.c #



OBJS	= ${SRCS:.c=.o}

#BON = ${BONUS:.c=.o}#

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

LFLAGS = -c


${NAME}:	${SRCS}
			${CC} ${CFLAGS} ${LFLAGS} ${SRCS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f *.o

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

