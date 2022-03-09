CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Convert
SRC = main.cpp Conversion.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all