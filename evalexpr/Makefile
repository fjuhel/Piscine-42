# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/22 23:17:36 by fjuhel            #+#    #+#              #
#    Updated: 2016/07/22 23:17:36 by fjuhel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = srcs/main.c srcs/eval_expr.c \
	  srcs/str.c srcs/ft_split_whitespaces.c \
	  srcs/list.c

OBJ = main.o eval_expr.o \
	  str.o ft_split_whitespaces.o \
	  list.o

INC = includes/

all: $(NAME)

$(NAME):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(SRC)
	@gcc $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

