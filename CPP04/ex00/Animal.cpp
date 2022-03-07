#include "Animal.hpp"

Animal::Animal(void) : _type("Unknown")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type) :  _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "*random animal sound*" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}
