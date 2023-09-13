# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 03:49:18 by rpliego           #+#    #+#              #
#    Updated: 2023/09/13 04:04:33 by rpliego          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
SRC = case_2.c \
		case_3.c \
		case_4.c \
		case_5.c \
		check_input.c \
		custom_atoi.c \
		ft_error.c \
		ft_free_all.c \
		index_stacks.c \
		make_chunk.c \
		pa.c \
		pb.c \
		push_a_sorted.c \
		push_swap.c \
		rotate_moves.c \
		sort_way.c

OBJ = $(SRC:.c=.o)
INCLUDE = push_swap.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $< 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re