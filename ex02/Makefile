CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
MAIN = arraya

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) Array.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re