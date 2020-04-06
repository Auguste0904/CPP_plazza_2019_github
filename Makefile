##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC		=	g++

CFLAGS	+=	-I./include -Wall -Wextra -W

NAME	=	plazza

SRC		=	src/InitShell.cpp			\
			src/Exception.cpp			\
			src/ErrorHandling.cpp		\
			main.cpp

OBJ		=	$(SRC:.cpp=.o)

all:	$(NAME)

%.o:	%.cpp
			@$(CC) $(CFLAGS) -c -o $@ $<
			@echo -e "\033[0;32m[OK]    \033[1;32m" $< "\033[0m"

$(NAME):	$(OBJ)
			@echo -e "\033[1;36m[OK]     \033[1;36mObj's files successfully compiled!\033[0m"
			@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
			@echo -e "\033[1;36m[OK]    \033[1;36m" $(NAME) "successfully created!\033[0m"

clean:
			@rm -f $(OBJ)
			@echo -e "\033[1;33m[OK]     \033[1;33mOBJs successfully cleaned!\033[0m"

fclean:	clean
			@rm -f $(shell find . -name "*~")
			@rm -f $(shell find . -name "a.out")
			@rm -f $(shell find . -name "vgcore.*")
			@rm -f $(shell find . -name "\#*#")
			@rm -f $(shell find . -name "*.gc*")
			@rm -f $(shell find . -name ".safe")
			@rm -f $(NAME)
			@echo -e "\033[1;33m[OK]     \033[1;33mOBJs and useless files successfully cleaned!\033[0m"

re:	fclean all

.PHONY:	all clean fclean re
