# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 08:17:24 by anaroste          #+#    #+#              #
#    Updated: 2018/04/09 15:39:07 by anaroste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_s.c			\
		ft_p.c			\
		ft_r.c			\
		ft_rr.c			\
		best_fit.c		\
		ft_resetpst.c	\
		ft_write.c		\
		lst_handler.c	\
		push_swap.c		\
		main.c			\
		ft_error.c		\

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(LIB)
	@$(CC) $(CFLAG) -c $(SRC)
	@$(CC) $(CFLAG) -o $(NAME) $(OBJ) -L../libft -lft

$(LIB) :
	@make -C ../libft re
	@echo "Push_swap compiled"

clean :
	@make -C ../libft clean
	@/bin/rm -f $(OBJ)

fclean : clean
	@make -C ../libft fclean
	@/bin/rm -f $(NAME)
	@echo "Push_swap deleted"

re : fclean all

.PHONY: clean fclean re all
