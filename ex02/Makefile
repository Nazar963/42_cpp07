CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = array

all: $(NAME)

%.o: %.cpp
	@$(CC) -g -c $< -o $@

$(NAME): $(OFILES)
	$(CC) -g $(OFILES) -o $(NAME)

clean:
	rm $(NAME)
	rm *.o

fclean: clean

re: fclean all

.PHONY: all clean flcean re