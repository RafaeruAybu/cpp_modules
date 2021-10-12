NAME = a.out
SRC = main.cpp Zombie.cpp ZombieHorde.cpp
CC = clang++
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean