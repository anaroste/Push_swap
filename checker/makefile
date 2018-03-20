# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/10 13:31:24 by anaroste          #+#    #+#              #
#    Updated: 2018/03/12 19:02:28 by anaroste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = checker.c			\
	op_part_one.c		\
	op_part_two.c		\
	op_part_three.c		\
	ft_check.c			\

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(LIB)
		@$(CC) $(CFLAG) -c $(SRC)
		@$(CC) $(CFLAG) -o $(NAME) $(OBJ) -L../libft -lft

$(LIB) :
		@make -C ../libft re
		@echo "Checker compiled"

clean :
		@make -C ../libft clean
		@/bin/rm -f $(OBJ)

fclean : clean
		@make -C ../libft fclean
		@/bin/rm -f $(NAME)
		@echo "Checker deleted"

re : fclean all

.PHONY: clean fclean re all
