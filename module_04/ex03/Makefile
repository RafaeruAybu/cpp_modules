NAME	= a.out
SRC		= main.cpp AMateria.cpp Character.cpp
CC		= clang++
CFLAGS	= -g -Wall -Wextra -Werror
OBJ		= $(SRC:.cpp=.o)

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean
