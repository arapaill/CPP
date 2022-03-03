#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamondTrap("MUTANT");

	diamondTrap.whoAmI();
	diamondTrap.attack("FRANK");
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.takeDamage(20);
	diamondTrap.beRepaired(10);
	diamondTrap.takeDamage(100);

	return (0);
}