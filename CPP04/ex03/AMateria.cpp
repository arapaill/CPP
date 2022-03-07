#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unknown")
{
	return ;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &aMateria)
{
	*this = aMateria;
}

AMateria::~AMateria()
{
	return ;
}

AMateria	&AMateria::operator=(const AMateria &aMateria)
{
	if (this != &aMateria)
		_type = aMateria._type;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "is doing an unkown action on " << target.getName() << std::endl;
}