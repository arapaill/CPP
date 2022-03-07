#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource constructor called" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
    *this = materiaSource;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this != &materiaSource)
	{
		for (int i = 0; i < _inventorySize; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (materiaSource._inventory[i])
				_inventory[i] = materiaSource._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == NULL)
		{
            std::cout << "materia " << m->getType() << "learned" << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
    std::cout << "inventory full" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	std::cout << type << " cannot be learned" << std::endl;
	return (NULL);
}