#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
public:
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
        ~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);
		std::string	getType(void) const;
		void		makeSound(void) const;
    protected:
        std::string _type;
};

 #endif