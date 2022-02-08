CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03
SRC = main.cpp weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all