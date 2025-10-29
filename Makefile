# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raulp <raulp@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 14:27:26 by raulp             #+#    #+#              #
#    Updated: 2025/10/28 14:27:27 by raulp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME    = ft_printf

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRC     = ft_printf.c original_printf.c
OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

