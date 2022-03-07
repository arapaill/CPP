#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Constructor for cure called" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
    std::cout << "Copy constructor for cure called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor for cure called" << std::endl;
}

Cure	&Cure::operator=(const Cure &cure)
{
	(void)cure;
	return (*this);
}

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}