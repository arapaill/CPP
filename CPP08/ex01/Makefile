
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Span
SRC = main.cpp Span.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all