# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raulp <raulp@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 14:27:26 by raulp             #+#    #+#              #
#    Updated: 2025/10/30 16:06:37 by raulp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME    = libftprint.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar

SRC     = 	ft_printf.c \
			ft_putchar.c \
			ft_putstring_count.c \
			ft_puthex.c \
			ft_putptr.c \
			ft_putnbr.c
OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

