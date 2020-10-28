##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	infin_add.c

INT	=	-I .include/my.h -I ./include/mylist.h

LIB	=	-L ./lib -lby

OBJ	=	$(SRC:.c=.o)

NAME	=	infin_add

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIB) $(INT)

clean:
	rm -f $(OBJ)
fclean:
		rm -f $(NAME)
re:		clean fclean all