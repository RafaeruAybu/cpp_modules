NAME = a.out
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CC = clang++
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)

#$(NAME): $(OBJ)
#	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean