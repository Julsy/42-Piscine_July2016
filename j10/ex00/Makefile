# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 11:32:20 by iiliuk            #+#    #+#              #
#    Updated: 2016/07/25 13:57:27 by iiliuk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putnbr.c

SRC_O = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_putnbr.o

HEADER = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(HEADER)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
