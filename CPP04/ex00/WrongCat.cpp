#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "WrongCat constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongcat)
{
	if (this != &wrongcat)
	{
		this->_type = wrongcat._type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "*meooow*" << std::endl;
}
