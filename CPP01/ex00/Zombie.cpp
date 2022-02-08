#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << _name << " Died. RIP !" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}