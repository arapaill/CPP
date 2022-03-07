#include "Ice.hpp"

Ice::Ice(void) : AMateria("Ice")
{
    std::cout << "Constructor for Ice called" << std::endl;
}

Ice::Ice(const Ice &Ice) : AMateria(Ice)
{
    std::cout << "Copy constructor for Ice called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor for Ice called" << std::endl;
}

Ice	&Ice::operator=(const Ice &Ice)
{
	(void)Ice;
	return (*this);
}

Ice	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "shoot a stalactite at " << target.getName() << std::endl;
}