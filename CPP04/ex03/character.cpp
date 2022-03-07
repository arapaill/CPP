#include "Character.hpp"

Character::Character(void) : _name("random")
{
    std::cout << "character" << _name << "created" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
    std::cout << "character" << _name << "created" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &character)
{
    std::cout << "character" << _name << "copied" << std::endl;
    *this = character;
}

Character::~Character()
{

    std::cout << "Destructor called " << _name << " is dead" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character	&Character::operator=(const Character &character)
{
	if (this != &character)
	{
		_name = character._name;
		for (int i = 0; i < _inventorySize; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (character._inventory[i])
				_inventory[i] = character._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

const std::string	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			
			std::cout << "Character " << _name << " equips materia in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "can't equips " <<  m->getType() << " (inventory full)" << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < _inventorySize)
	{
		std::cout << "Character" << _name << "unequips " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < _inventorySize && _inventory[idx])
	{
		_inventory[idx]->use(target);
		return ;
	}
	std::cout << "Nothing found to use at index " << idx << std::endl;
}
