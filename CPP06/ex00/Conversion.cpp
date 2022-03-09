#include "Conversion.hpp"

Conversion::Conversion() : _nb("Empty")
{
}

Conversion::Conversion(std::string nb) : _nb(nb)
{
}

Conversion::Conversion(Conversion const &refNb)
{
	_nb = refNb.getNb();
}

Conversion::~Conversion()
{
}

Conversion & Conversion::operator=(Conversion & rhs)
{
	_nb = rhs.getNb();
	return *this;
}

Conversion::operator char()
{
	char 	ret = 0;
	int		tmp = 0;

	try
	{
		if(isalpha(_nb[0]) && !_nb[1])
			tmp = (int)_nb[0];
		else 
			tmp = stoi(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "char: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "char: Impossible" << std::endl;
		return ret;
	}
	if (tmp < CHAR_MIN || tmp > CHAR_MAX)
	{
		std::cout << "char: Impossible" << std::endl;
		return ret;
	}
	if (tmp >= ' ' && tmp <= '~')
	{
		ret = tmp;
		std::cout << "char: '" << ret << "'" << std::endl;
	}
	else
		std::cout << "char: Non displayable" << std::endl;
	return ret;
}

Conversion::operator int()
{
	int ret = 0;

	try
	{
		if(isalpha(_nb[0]) && !_nb[1])
			ret = (int)_nb[0];
		else 
			ret = stoi(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "int: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "int: Impossible" << std::endl;
		return ret;
	}
	std::cout << "int: " << ret << std::endl;
	return ret;
}

Conversion::operator float()
{
	float ret = 0;
	try
	{
		if(isalpha(_nb[0]) && !_nb[1])
			ret = (float)_nb[0];
		else 
			ret = stof(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "float: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "float: Impossible" << std::endl;
		return ret;
	}
	std::cout << "float: " << ret << 'f' << std::endl;
	return ret;
}

Conversion::operator double()
{
	double ret = 0;

	try
	{
		if(isalpha(_nb[0]) && !_nb[1])
			ret = (double)_nb[0];
		else 
			ret = stod(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "double: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "double: Impossible" << std::endl;
		return ret;
	}
	std::cout << "double: " << ret << std::endl;
	return ret;
}

std::string Conversion::getNb() const
{
	return _nb;
}