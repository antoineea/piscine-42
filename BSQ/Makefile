# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/25 12:47:37 by msteffen          #+#    #+#              #
#    Updated: 2017/07/26 23:05:32 by msteffen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
LD=gcc
CFLAGS=-Iincludes -c -Wall -Wextra -Werror
LDFLAGS=-Iincludes -Wall -Wextra -Werror
OBJS=objs/map.o objs/read_file.o objs/read_value.o objs/main.o objs/check_value.o objs/bigger_square.o objs/copy_tab.o objs/print_map.o objs/file_open.o objs/read_file_1.o
NAME=bsq

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(NAME)

objs/read_file_1.o: srcs/read_file_1.c
	$(CC) $(CFLAGS) srcs/read_file_1.c -o objs/read_file_1.o
objs/map.o: srcs/map.c
	$(CC) $(CFLAGS) srcs/map.c -o objs/map.o
objs/read_file.o: srcs/read_file.c
	$(CC) $(CFLAGS) srcs/read_file.c -o objs/read_file.o
objs/read_value.o: srcs/read_value.c
	$(CC) $(CFLAGS) srcs/read_value.c -o objs/read_value.o
objs/main.o: srcs/main.c
	$(CC) $(CFLAGS) srcs/main.c -o objs/main.o
objs/check_value.o: srcs/check_value.c
	$(CC) $(CFLAGS) srcs/check_value.c -o objs/check_value.o
objs/bigger_square.o: srcs/bigger_square.c
	$(CC) $(CFLAGS) srcs/bigger_square.c -o objs/bigger_square.o
objs/copy_tab.o: srcs/copy_tab.c
	$(CC) $(CFLAGS) srcs/copy_tab.c -o objs/copy_tab.o
objs/print_map.o: srcs/print_map.c
	$(CC) $(CFLAGS) srcs/print_map.c -o objs/print_map.o
objs/file_open.o: srcs/file_open.c
	$(CC) $(CFLAGS) srcs/file_open.c -o objs/file_open.o

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
all: $(NAME)

.PHONY: all clean fclean re
