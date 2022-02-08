#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
	private:
		Weapon		&weapon;
		std::string	name;
};

#endif
