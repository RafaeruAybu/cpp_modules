NAME = phonebook
SRC = main.cpp my_phonebook.cpp person.cpp
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
