NAME = account
SRC = tests.cpp Account.cpp
CC = clang++ -std=c++98
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
