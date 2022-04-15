
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class	Span
{
public:
	Span(unsigned int n);
	Span(Span const &instance);
	virtual ~Span();
	Span	&operator=(Span const &instance);
	
	void	addNumber(int nb);
	void	addNumber(unsigned int from, unsigned int to, int value);
	int		shortestSpan(void);
	int		longestSpan(void);

private:
	Span();
	unsigned int n;
	std::vector<int>		vec;

};

#endif