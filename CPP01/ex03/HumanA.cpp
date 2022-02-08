#include "HumanA.hpp"

HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

~HumanA()
{}

void	attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}