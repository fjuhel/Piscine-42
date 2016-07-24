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

# Flags
FLAGS = -Wall -Wextra -Werror

# Principal binary of project
PROJET = colle-2
PROJET_C = srcs/main.c srcs/colles.c  srcs/shapes.c srcs/list.c \
			srcs/str_manip.c srcs/str_print.c
PROJET_O = main.o colles.o shapes.o list.o \
			str_manip.o str_print.o

# Handle colle-00 to colle-04
COLLE00 = colle-00
COLLE01 = colle-01
COLLE02 = colle-02
COLLE03 = colle-03
COLLE04 = colle-04

COLLE00_C = srcs/colle/colle00.c srcs/str_print.c
COLLE01_C = srcs/colle/colle01.c srcs/str_print.c
COLLE02_C = srcs/colle/colle02.c srcs/str_print.c
COLLE03_C = srcs/colle/colle03.c srcs/str_print.c
COLLE04_C = srcs/colle/colle04.c srcs/str_print.c

COLLE00_O = colle00.o str_print.o
COLLE01_O = colle01.o str_print.o
COLLE02_O = colle02.o str_print.o
COLLE03_O = colle03.o str_print.o
COLLE04_O = colle04.o str_print.o

# Shapes Bonus

SQUARE = square
RECTANGLE = rectangle
TRIANGLE = triange
DIAMOND = diamond

SQUARE_C = srcs/shapes/square.c srcs/str_print.c
RECTANGLE_C = srcs/shapes/rectangle.c srcs/str_print.c
TRIANGLE_C = srcs/shapes/triangle.c srcs/str_print.c
DIAMOND_C = srcs/shapes/diamond.c srcs/str_print.c

SQUARE_O = square.o str_print.o
RECTANGLE_O = rectangle.o str_print.o
TRIANGLE_O = triangle.o str_print.o
DIAMOND_O = diamond.o str_print.o

# Place for the headers
INC = includes/

# Rules
all: $(PROJET) \
	 $(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04) \
	 $(SQUARE) $(RECTANGLE) $(TRIANGLE) $(DIAMOND)
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

$(SQUARE):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(SQUARE_C)
	@gcc $(SQUARE_O) -o $(SQUARE)

$(RECTANGLE):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(RECTANGLE_C)
	@gcc $(RECTANGLE_O) -o $(RECTANGLE)

$(TRIANGLE):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(TRIANGLE_C)
	@gcc $(TRIANGLE_O) -o $(TRIANGLE)

$(DIAMOND):
	@gcc -I$(INC) -c -Wall -Werror -Wextra $(DIAMOND_C)
	@gcc $(DIAMOND_O) -o $(DIAMOND)

clean:
	@/bin/rm -f $(PROJET_O) \
				$(COLLE00_O) $(COLLE01_O) $(COLLE02_O) $(COLLE03_O) $(COLLE04_O) \
	            $(SQUARE_O) $(RECTANGLE_O) $(TRIANGLE_O) $(DIAMOND_O)

fclean: clean
	@/bin/rm -f $(PROJET) \
				$(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04) \
				$(SQUARE) $(RECTANGLE) $(TRIANGLE) $(DIAMOND)
re: fclean all
