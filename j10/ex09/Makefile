# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 17:19:33 by fjuhel            #+#    #+#              #
#    Updated: 2016/07/18 17:19:34 by fjuhel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = main.c calcul.c str.c

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(SRC)
	@gcc main.o calcul.o str.o -o $(NAME)

clean:
	@/bin/rm -f main.o calcul.o str.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
