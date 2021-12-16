NAME	= a.out
SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
OBJ		= $(SRC:.cpp=.o)

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean
