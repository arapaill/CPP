CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror

NAME = phonebook
SRC = phonebook.cpp contact.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all