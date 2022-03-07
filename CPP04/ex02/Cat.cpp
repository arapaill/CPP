#include "Cat.hpp"


Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal("Cat"), _brain(new Brain(*(Cat._brain)))
{
	std::cout << "Cat constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor callled" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(const Cat &Cat)
{
	if (this != &Cat)
	{
		this->_type = Cat._type;
		*(this->_brain) = *(Cat._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
}

void	Cat::printIdeas(int nb) const
{
	this->_brain->printNIdeas(nb);
}