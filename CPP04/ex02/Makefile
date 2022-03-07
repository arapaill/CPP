CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Brian
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all