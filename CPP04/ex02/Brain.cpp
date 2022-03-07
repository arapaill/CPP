#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "Random idea";
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "Random idea";
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

void	Brain::printNIdeas(int nb) const
{
    if(nb >= 0 && nb <= 100)
    {
        for(int i = 0; i < nb; i++)
            std::cout << "idea [" << i  << "]: "<< _ideas[i] << std::endl;
    }
}