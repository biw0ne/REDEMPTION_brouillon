##
## EPITECH PROJECT, 2021
## Redemption
## File description:
## Makefile
##

SRC	=	requirement.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	calendar

CFLAGS	=	-Wall -Wextra

CC	=	gcc

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all	$(NAME)	clean	fclean	re