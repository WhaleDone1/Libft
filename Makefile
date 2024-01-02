# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barpent <barpent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 12:07:23 by bcarpent          #+#    #+#              #
#    Updated: 2023/11/23 17:35:28 by bcarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS =	ft_atoi.c ft_itoa.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
        	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
       		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strtrim.c ft_split.c ft_strjoin.c ft_strmapi.c ft_substr.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c

OBJS = ${SRCS:.c=.o}

DEPS = ${OBJS:.o=.d}

all : ${NAME}
-include ${DEPS}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o : %.c
	${CC} ${FLAGS} -MMD -MP -o $@ -c $<

clean :
	rm -f ${OBJS} ${DEPS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
