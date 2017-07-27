# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/20 11:16:43 by msteffen          #+#    #+#              #
#    Updated: 2017/07/23 03:22:25 by msteffen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
LD=gcc

CFLAGS=-c -Wall -Wextra -Werror
LDFLAGS=-Wall -Wextra -Werror

SRCS=eval_expr.c ft_char.c ft_nbrs.c main.c stack.c operations.c
OBJS=eval_expr.o ft_char.o ft_nbrs.o main.o stack.o operations.o

NAME=eval_expr

all: $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(NAME)
.c.o:
	$(CC) $(CFLAGS) $< -o $@


.PHONY: all clean fclean re
