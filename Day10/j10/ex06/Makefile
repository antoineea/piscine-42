# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 22:22:33 by msteffen          #+#    #+#              #
#    Updated: 2017/07/18 22:35:48 by msteffen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
LD=gcc
CFLAGS=-c -Wall -Wextra -Werror
LDFLAGS=-Wall -Wextra -Werror
SRCS=doop.c error.c ft_atoi.c ft_math.c ft_string.c
OBJS=doop.o error.o ft_atoi.o ft_math.o ft_string.o
NAME=do-op

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

do-op.o:
	$(CC) $(CFLAGS) do-op.c
error.o:
	$(CC) $(CFLAGS) error.c
ft_atoi.o:
	$(CC) $(CFLAGS) ft_atoi.c
ft_math.o:
	$(CC) $(CFLAGS) ft_math.c
ft_string.o:
	$(CC) $(CFLAGS) ft_string.c

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
