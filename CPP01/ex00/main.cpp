#include "Zombie.hpp"

int main()
{
	Zombie	z1("zombie 1");
	z1.announce();
	Zombie	*z2;
	z2 = newZombie("zombie 2");
	z2->announce();
	delete z2;
	randomChump("zombie 3");
    return (0);
}