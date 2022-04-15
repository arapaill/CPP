
#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T> void	swap(T &a, T &b)
{
	T	tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template<typename T> const T &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template<typename T> const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

#endif