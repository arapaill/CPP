#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value= raw;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(value << _fract);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(value * (1 << this->_fract)));
}

float Fixed::toFloat(void) const
{
	float f;

	f = (float)getRawBits() / (1 << _fract);
	return f;
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> _fract);
}   

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}