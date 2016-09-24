# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 11:32:20 by iiliuk            #+#    #+#              #
#    Updated: 2016/07/28 18:52:30 by iiliuk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_cat.o

clean:
	/bin/rm -f ft_cat.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
