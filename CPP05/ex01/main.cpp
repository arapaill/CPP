#include "Form.hpp"

int main()
{
    Form        form("form", 5, 5);
    Bureaucrat  paul("Paul", 6);

	paul.signForm(form);
	paul.upGrade();
	paul.signForm(form);
	std::cout << paul << std::endl;
}