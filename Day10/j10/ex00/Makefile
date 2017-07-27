# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 05:04:50 by msteffen          #+#    #+#              #
#    Updated: 2017/07/18 17:10:31 by msteffen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft.a

clean:
	rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	rm libft.a
re: clean fclean all

libft.a: ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a
ft_putchar.o:
	gcc -c -Wall -Werror -Wextra srcs/ft_putchar.c -I includes/
ft_putstr.o:
	gcc -c -Wall -Werror -Wextra srcs/ft_putstr.c -I includes/
ft_strcmp.o:
	gcc -c -Wall -Werror -Wextra srcs/ft_strcmp.c -I includes/
ft_strlen.o:
	gcc -c -Wall -Werror -Wextra srcs/ft_strlen.c -I includes/
ft_swap.o:
	gcc -c -Wall -Werror -Wextra srcs/ft_swap.c -I includes/

.PHONY: all clean fclean re
