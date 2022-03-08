CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Intern
SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME) *_shrubbery

fclean: clean

re: fclean all