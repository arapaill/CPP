CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Data
SRC = main.cpp Data.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all