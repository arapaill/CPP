
#include "Span.hpp"

Span::Span(unsigned int n) : n(n)
{
	return ;
}

Span::Span(Span const &instance)
{
	*this = instance;
}

Span::~Span(void)
{
	this->vec.clear();
	return ;
}

Span		&Span::operator=(Span const &instance)
{
	this->n = instance.n;
	this->vec = instance.vec;
	return *this;
}

void	Span::addNumber(int nb)
{
	if (this->vec.size() == this->n)
		throw std::exception();
	this->vec.push_back(nb);
}

void					Span::addNumber(unsigned int from, unsigned int to, int value)
{
	if (to >= this->n)
		throw std::exception();
	if (from >= to)
		throw std::exception();
	if (to > this->vec.size())
		vec.resize(to);
	std::vector<int>::iterator	it = this->vec.begin() + from;
	std::fill(it, it + (to - from), value);
}

int		Span::shortestSpan(void)
{
	if (this->vec.size() <= 1)
		throw std::exception();

	std::vector<int>::iterator	it;
	std::vector<int>			tmp;
	std::vector<int>			sortVec = this->vec;
	std::sort(sortVec.begin(), sortVec.end());
	for (it = sortVec.begin() + 1; it != sortVec.end(); it++)
		tmp.push_back(*it - *(it - 1));
	return *std::min_element(tmp.begin(), tmp.end());
}

int		Span::longestSpan(void)
{
	if (this->vec.size() <= 1)
		throw std::exception();
	std::vector<int>::iterator min = std::min_element(this->vec.begin(), this->vec.end());
	std::vector<int>::iterator max = std::max_element(this->vec.begin(), this->vec.end());
	return *max - *min;
}