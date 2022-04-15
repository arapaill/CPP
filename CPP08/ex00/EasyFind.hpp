#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>

class NotFoundException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Value not found !");
	}
};

class EmptyContainerException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("The container is empty !");
	}
};

template <typename T>
int		easyfind(T &container, int i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (!container.size())
		throw(EmptyContainerException());
	if (it == container.end())
		throw(NotFoundException());
	return *it;
}


#endif