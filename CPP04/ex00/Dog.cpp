#include "Dog.hpp"


Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &Dog) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	*this = Dog;
}

Dog::~Dog(void)
{
    std::cout << "Animal destructor callled" << std::endl;
}

Dog	&Dog::operator=(const Dog &Dog)
{
	if (this != &Dog)
	{
		this->_type = Dog._type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
}