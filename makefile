# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 18:51:37 by anaroste          #+#    #+#              #
#    Updated: 2018/04/12 09:29:31 by anaroste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = checker

NAME = push_swap

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_C = checker.c			\
		op_part_one.c		\
		op_part_two.c		\
		op_part_three.c		\
		ft_check.c			\

SRC_P = ft_s.c				\
		ft_p.c				\
		ft_r.c				\
		ft_rr.c				\
		best_fit.c			\
		ft_resetpst.c		\
		ft_write.c			\
		lst_handler.c		\
		push_swap.c			\
		main.c				\
		ft_error.c			\
		listgood.c			\
		little_pile.c		\
		ft_free.c			\

ADD_C = $(addprefix file/, $(SRC_C))
ADD_P = $(addprefix file/, $(SRC_P))

OBJ_C = $(SRC_C:.c=.o)
OBJ_P = $(SRC_P:.c=.o)

all : $(NAME)

$(NAME) : $(LIB)
	@$(CC) $(CFLAG) -c $(ADD_P)
	@$(CC) $(CFLAG) -o $(NAME) $(OBJ_P) -L./libft -lft
	@echo "Push_swap compiled"

$(NAME_C) : $(LIB)
	@$(CC) $(CFLAG) -c $(ADD_C)
	@$(CC) $(CFLAG) -o $(NAME_C) $(OBJ_C) -L./libft -lft
	@echo "Checker compiled"

$(LIB) :
	@make -C ./libft re
	@echo "Libft compiled"

clean :
	@make -C ../libft clean
	@/bin/rm -f $(OBJ_C) $(OBJ_P)
	@echo "Object deleted"

fclean : clean
	@make -C ../libft fclean
	@/bin/rm -f $(NAME) $(NAME_C)
	@echo "Executable deleted"

re : fclean all

.PHONY: clean fclean re all
