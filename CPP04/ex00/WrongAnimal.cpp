#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknown")
{
     std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
	{
		this->_type = wrongAnimal._type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*random wronganimal sound*" << std::endl;
}
