# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 19:06:41 by iiliuk            #+#    #+#              #
#    Updated: 2016/07/31 20:12:57 by iiliuk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

CPATH =	./srcs/

SRCS = main.c rush00.c rush01.c rush02.c rush03.c rush04.c lib.c lib2.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I ./includes

%.o: $(CPATH)%.c
		$(CC) $(CFLAGS) -c $< -I ./includes
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
