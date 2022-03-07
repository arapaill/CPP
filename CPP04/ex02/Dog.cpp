#include "Dog.hpp"


Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &Dog) : Animal("Dog"), _brain(new Brain(*(Dog._brain)))
{
	std::cout << "Dog constructor called" << std::endl;
	*this = Dog;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor callled" << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(const Dog &Dog)
{
	if (this != &Dog)
	{
		this->_type = Dog._type;
		*(this->_brain) = *(Dog._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
}

void	Dog::printIdeas(int nb) const
{
	this->_brain->printNIdeas(nb);
}