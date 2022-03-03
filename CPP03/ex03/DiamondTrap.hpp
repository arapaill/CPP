#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		DiamondTrap(void);
		
	public:
		DiamondTrap(DiamondTrap &diamondTrap);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap &diamondTrap);

		void	whoAmI(void) const;
		using	ScavTrap::attack;
};

#endif