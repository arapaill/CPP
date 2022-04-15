
#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <list>

void    testList(void)
{
    std::cout << "test with container list: " << std::endl;
     std::list<int> list;
    list.push_front(5);
    list.push_front(17);
    std::cout << list.front() << std::endl;
    list.pop_front();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::list<int> s(list);
}

void	testVector(void)
{
    std::cout << "test with container vector: " << std::endl;
	std::vector<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);
	mstack.pop_back();
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::vector<int>::iterator	it = mstack.begin();
	std::vector<int>::iterator	ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	testSubject(void)
{
    std::cout << "test from the subject: " << std::endl;
	MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
}


int	main(void)
{
	testSubject();
	testVector();
	testList();
	
	return (0);
}