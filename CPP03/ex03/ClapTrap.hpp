
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>

class ClapTrap
{
    public:
        ClapTrap(std::string const name);
	    ClapTrap(ClapTrap &src);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

		std::string	getName(void);
		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getAttackDamage(void);

        ClapTrap & operator=(ClapTrap & rhs);
    protected:
        std::string _name;
        int 		_HP;
        int 		_EP;
        int 		_DPS;
};

#endif