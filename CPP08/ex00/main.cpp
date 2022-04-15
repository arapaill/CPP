#include <iostream>
#include "EasyFind.hpp"

int main()
{
	{
		std::vector<int> test;
		test.push_back(34);
		test.push_back(17);
		test.push_back(24);

		try
		{
			std::cout << "34: ";
			easyfind< std::vector<int> >(test, 34);
			std::cout << "Found !" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "0: ";
			easyfind< std::vector<int> >(test, 0);
			std::cout << "Found !" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "24: ";
			easyfind< std::vector<int> >(test, 34);
			std::cout << "Found !" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{ // Empty
		std::vector<int> test;
		try
		{
			easyfind<std::vector<int> >(test, 34);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}