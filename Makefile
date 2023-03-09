##
## EPITECH PROJECT, 2022
## B-CPE-101-BDX-1-1-myprintf-matteo.verdez
## File description:
## Makefile
##



NAME	= my_ls

CC	= gcc -g

RM	= rm -f

SRCS	=	./src/main.c		\
			./src/fill_struct.c	\
			./src/ls_l_print.c	\
			./src/ls_l.c		\
			./src/ls_r.c		\
			./src/ls_a.c 	\
			./src/redirect.c	\

OBJS	= $(SRCS:.c=.o)

LIB = -L ./lib/my/ -lmy

CFLAGS = -I ./include/

all: $(NAME)

$(NAME):	$(OBJS)
		make -C ./lib/my/
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)
		rm lib/libmy.a

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re: fclean all

.PHONY: all clean fclean re
