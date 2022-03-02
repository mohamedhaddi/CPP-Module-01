CC=c++
SRC=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
CFLAGS=-Wall -Wextra -Werror -std=c++98
DFLAGS=-g
NAME=BraiiiiiiinnnzzzZ

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
