#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
        ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &scavTrap);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &scavTrap);

		void	guardGate(void) const;
		void	attack(const std::string &target);
};

#endif