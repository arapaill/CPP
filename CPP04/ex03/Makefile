CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = materia
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp ice.cpp MateriaSource.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all