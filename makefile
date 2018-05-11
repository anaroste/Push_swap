# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 18:51:37 by anaroste          #+#    #+#              #
#    Updated: 2018/04/20 14:48:52 by anaroste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = checker

NAME = push_swap

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_C = main_checker.c			\
		ft_verif_pile.c			\
		ft_what_to_do.c			\
		ft_options.c			\
		ft_swap.c				\
		ft_push.c				\
		ft_rotate.c				\
		ft_reverse_rotate.c		\
		ft_init_pile.c			\
		ft_message.c			\
		ft_print_piles.c		\
		ft_is_valid_number.c	\

SRC_P = ft_s.c					\
		ft_p.c					\
		ft_r.c					\
		ft_rr.c					\
		best_fit.c				\
		ft_resetpst.c			\
		ft_write.c				\
		lst_handler.c			\
		push_swap.c				\
		main.c					\
		ft_error.c				\
		listgood.c				\
		little_pile.c			\
		ft_free.c				\
		smaller_bigger.c		\

ADD_C = $(addprefix src/, $(SRC_C))
ADD_P = $(addprefix src/, $(SRC_P))

OBJ_C = $(ADD_C:.c=.o)
OBJ_P = $(ADD_P:.c=.o)

all : $(LIB) $(NAME) $(NAME_C)

$(NAME) : $(OBJ_P)
	@$(CC) $(CFLAG) -o $(NAME) $(OBJ_P) -L./libft -lft
	@echo "Push_swap compiled"

$(NAME_C) : $(OBJ_C)
	@$(CC) $(CFLAG) -o $(NAME_C) $(OBJ_C) -L./libft -lft
	@echo "Checker compiled"

$(LIB) :
	@make -C ./libft

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@make clean -C libft
	@/bin/rm -f $(OBJ_C) $(OBJ_P)
	@echo "Object deleted"

fclean : clean
	@make fclean -C libft
	@/bin/rm -f $(NAME) $(NAME_C)
	@echo "Executable deleted"

re : fclean all

.PHONY: clean fclean re all
