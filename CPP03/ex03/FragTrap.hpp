
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
    	FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &fragTrap);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &fragTrap);

		void	highFivesGuys(void) const;
};
#endif