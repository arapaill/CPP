
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <cstdlib>
# include <iostream>

Base * generate(void)
{
    int	randInt;

	randInt = std::rand() % 3;
	if (randInt == 0)
		return (new A());
	if (randInt == 1)
		return (new B());
	return (new C());
}

void identify(Base* base)
{
	if (dynamic_cast<A *>(base) != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(base) != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(base) != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void identify(Base& base)
{
	try
	{
		(void)dynamic_cast<A &>(base);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	
	try
	{
		(void)dynamic_cast<B &>(base);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		(void)dynamic_cast<C &>(base);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main(void)
{
	Base	*base;
	srand(time(NULL));

	base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}