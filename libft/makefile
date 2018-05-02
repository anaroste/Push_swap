# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 08:57:31 by anaroste          #+#    #+#              #
#    Updated: 2018/04/20 14:49:50 by anaroste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = 						\
	ft_lstadd.c				\
	ft_memcmp.c				\
	ft_putnbr.c				\
	ft_strdel.c				\
	ft_strmapi.c			\
	ft_strrev.c				\
	ft_atoi.c				\
	ft_atoll.c				\
	ft_lstdel.c				\
	ft_memcpy.c				\
	ft_putnbr_fd.c			\
	ft_strdup.c				\
	ft_strncat.c			\
	ft_strsplit.c			\
	ft_bzero.c				\
	ft_lstdelone.c			\
	ft_memdel.c				\
	ft_putstr.c				\
	ft_strequ.c				\
	ft_strncmp.c			\
	ft_strstr.c				\
	ft_isalnum.c			\
	ft_lstiter.c			\
	ft_memmove.c			\
	ft_putstr_fd.c			\
	ft_striter.c			\
	ft_strncpy.c			\
	ft_strsub.c				\
	ft_isalpha.c			\
	ft_lstmap.c				\
	ft_memset.c				\
	ft_strcat.c				\
	ft_striteri.c			\
	ft_strtrim.c			\
	ft_isascii.c			\
	ft_lstnew.c				\
	ft_putchar.c			\
	ft_strchr.c				\
	ft_strjoin.c			\
	ft_strnequ.c			\
	ft_tolower.c			\
	ft_isdigit.c			\
	ft_memalloc.c			\
	ft_putchar_fd.c			\
	ft_strclr.c				\
	ft_strlcat.c			\
	ft_strnew.c				\
	ft_toupper.c			\
	ft_isprint.c			\
	ft_memccpy.c			\
	ft_putendl.c			\
	ft_strcmp.c				\
	ft_strlen.c				\
	ft_strnstr.c			\
	ft_itoa.c				\
	ft_memchr.c				\
	ft_putendl_fd.c			\
	ft_strcpy.c				\
	ft_strmap.c				\
	ft_strrchr.c			\
	get_next_line.c			\
	ft_add_nchar_after.c	\
	ft_isint.c				\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME).a $(OBJ)
	@ranlib $(NAME).a
	@echo "Libft compiled"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME).a

re: fclean all

.PHONY: clean fclean re all
