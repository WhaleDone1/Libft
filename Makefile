# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 14:06:07 by bcarpent          #+#    #+#              #
#    Updated: 2024/03/05 15:41:52 by bcarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
LIBFT_DIR = Libft
GNL_DIR = GNL
PRINTF_DIR = Printf
SRCS =	$(LIBFT_DIR)/ft_atoi.c $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_bzero.c \
	$(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_isalnum.c $(LIBFT_DIR)/ft_isalpha.c \
	$(LIBFT_DIR)/ft_isascii.c $(LIBFT_DIR)/ft_isdigit.c $(LIBFT_DIR)/ft_isprint.c \
	$(LIBFT_DIR)/ft_memchr.c $(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_memcpy.c \
	$(LIBFT_DIR)/ft_memmove.c $(LIBFT_DIR)/ft_memset.c $(LIBFT_DIR)/ft_strchr.c \
	$(LIBFT_DIR)/ft_strdup.c $(LIBFT_DIR)/ft_strlcat.c $(LIBFT_DIR)/ft_strlcpy.c \
	$(LIBFT_DIR)/ft_strlen.c $(LIBFT_DIR)/ft_strncmp.c $(LIBFT_DIR)/ft_strnstr.c \
	$(LIBFT_DIR)/ft_strrchr.c $(LIBFT_DIR)/ft_tolower.c $(LIBFT_DIR)/ft_toupper.c \
	$(LIBFT_DIR)/ft_strtrim.c $(LIBFT_DIR)/ft_split.c $(LIBFT_DIR)/ft_strjoin.c \
	$(LIBFT_DIR)/ft_strmapi.c $(LIBFT_DIR)/ft_substr.c $(LIBFT_DIR)/ft_striteri.c \
	$(LIBFT_DIR)/ft_putchar_fd.c $(LIBFT_DIR)/ft_putstr_fd.c \
	$(LIBFT_DIR)/ft_putnbr_fd.c $(LIBFT_DIR)/ft_putendl_fd.c \
	$(GNL_DIR)/get_next_line.c $(GNL_DIR)/get_next_line_utils.c\
	$(PRINTF_DIR)/ft_printf.c $(PRINTF_DIR)/ft_utils_printf.c $(PRINTF_DIR)/ft_putnbrptr_printf.c \
	$(PRINTF_DIR)/ft_putnbrhexa_printf.c $(PRINTF_DIR)/ft_itoa.c $(PRINTF_DIR)/ft_uitoa.c

OBJS = ${SRCS:.c=.o}
DEPS = ${OBJS:.o=.d}

GREEN_COLOR = "\033[32m"
CYAN_COLOR = "\033[36m"
BLUE_COLOR = "\033[34m"
X = "\033[0m"
BOLD = "\033[1m"

all: ${NAME}

-include ${DEPS}

${NAME}: ${OBJS}
	@echo $(BOLD)$(GREEN_COLOR)Compiling the following files:$(X)$(CYAN_COLOR)[$(SRCS)]$(X) 
	@ar rcs ${NAME} ${OBJS}
	@echo $(BOLD)$(GREEN_COLOR)Compilation done.

%.o : %.c
	@${CC} ${FLAGS} -MMD -MP -o $@ -c $< -I$(LIBFT_DIR) -I$(GNL_DIR) -I$(PRINTF_DIR)

clean :
	@rm -f ${OBJS} ${DEPS}
	@echo $(BOLD)$(GREEN_COLOR)Cleaning the following files: $(X)$(BLUE_COLOR)[$(SRCS)]$(X)
	@echo $(BOLD)$(GREEN_COLOR)Cleaning done.

fclean : clean
	@rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
