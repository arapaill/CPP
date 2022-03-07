
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain
{
	protected:
		std::string	_ideas[100];
		
	public:
		Brain(void);
		Brain(const Brain &brain);
		virtual ~Brain();
		Brain	&operator=(const Brain &brain);
		void	printNIdeas(int nb) const;
};

#endif