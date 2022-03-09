#ifndef Conversion_HPP
# define Conversion_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits.h>

class Conversion
{
private:
	std::string _nb;
public:
	Conversion();
	Conversion(std::string nb);
	Conversion(Conversion const & ref);
	~Conversion();

	Conversion & operator=(Conversion & rhs);
	operator char();
	operator int();
	operator float();
	operator double();
	std::string getNb() const;
};

#endif