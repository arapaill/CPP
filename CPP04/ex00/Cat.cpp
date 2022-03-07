#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void)
{
    std::cout << "Animal destructor callled" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*meooow*" << std::endl;
}