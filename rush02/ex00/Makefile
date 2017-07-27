# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/20 11:16:43 by msteffen          #+#    #+#              #
#    Updated: 2017/07/23 21:46:33 by msteffen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
LD=cc

CFLAGS=-c -Wall -Wextra -Werror
LDFLAGS=-Wall -Wextra -Werror

SRCS=ft_checks.c ft_colle.c ft_puts.c main.c strings.c
OBJS=ft_checks.o ft_colle.o ft_puts.o main.o strings.o

NAME=colle-2

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
