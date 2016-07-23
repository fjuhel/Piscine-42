# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/22 23:37:26 by fjuhel            #+#    #+#              #
#    Updated: 2016/07/22 23:37:27 by fjuhel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Principal binary of project
PROJET = colle-2
PROJET_C = srcs/main.c 
PROJET_O = main.o

# Handle colle-00 to colle-04
COLLE00 = colle-00
COLLE01 = colle-01
COLLE02 = colle-02
COLLE03 = colle-03
COLLE04 = colle-04

COLLE00_C = srcs/colle/colle-00.c srcs/str.c
COLLE01_C = srcs/colle/colle-01.c srcs/str.c
COLLE02_C = srcs/colle/colle-02.c srcs/str.c
COLLE03_C = srcs/colle/colle-03.c srcs/str.c
COLLE04_C = srcs/colle/colle-04.c srcs/str.c

COLLE00_O = colle-00.o str.o
COLLE01_O = colle-01.o str.o
COLLE02_O = colle-02.o str.o
COLLE03_O = colle-03.o str.o
COLLE04_O = colle-04.o str.o

# Futures files for others forms


# Place for the headers
INC = includes/

# Rules
all: $(PROJET) $(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04)

$(PROJET):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(PROJET_C)
	@gcc $(PROJET_O) -o $(PROJET)

$(COLLE00):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(COLLE00_C)
	@gcc $(COLLE00_O) -o $(COLLE00)

$(COLLE01):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(COLLE01_C)
	@gcc $(COLLE01_O) -o $(COLLE01)

$(COLLE02):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(COLLE02_C)
	@gcc $(COLLE02_O) -o $(COLLE02)

$(COLLE03):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(COLLE03_C)
	@gcc $(COLLE03_O) -o $(COLLE03)

$(COLLE04):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(COLLE04_C)
	@gcc $(COLLE04_O) -o $(COLLE04)

clean:
	@/bin/rm -f $(PROJET_O) $(COLLE00_O) $(COLLE01_O) $(COLLE02_O) $(COLLE03_O) $(COLLE04_O)

fclean: clean
	@/bin/rm -f $(PROJET) $(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04)

re: fclean all
