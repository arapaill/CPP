#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();

        void    setType(std::string type);
        const std::string &gettype();
    private:
     std::string _type;
};
#endif