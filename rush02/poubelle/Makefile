# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmadad <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 11:05:28 by hmadad            #+#    #+#              #
#    Updated: 2016/07/24 16:33:27 by hmadad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = srcs/main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c \
	  srcs/ft_create_elem.c srcs/ft_list_push_back.c srcs/ft_list_affiche.c \
	  srcs/ft_putnbr.c srcs/colle00.c srcs/colle01.c srcs/colle02.c \
	  srcs/colle03.c srcs/colle04.c srcs/ft_list_cmp.c srcs/ft_list_clear.c \
	  srcs/ft_taille_colle.c

O = main.o ft_putchar.o ft_putstr.o ft_strlen.o ft_create_elem.o \
	ft_list_push_back.o ft_list_affiche.o ft_putnbr.o colle00.o colle01.o \
	colle02.o colle03.o colle04.o ft_list_cmp.o ft_list_clear.o \
	ft_taille_colle.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror -I includes/ $(SRC)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(O)

.PHONY: clean
clean:
	@rm -f $(O)

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)

re: fclean all
