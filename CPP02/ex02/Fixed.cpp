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

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->_value > fixed._value);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->_value < fixed._value);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_value >= fixed._value);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_value <= fixed._value);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->_value == fixed._value);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_value != fixed._value);
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	++(this->_value);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--(this->_value);
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	Fixed	temp(*this);

	if (n >= 0)
	{
		for (int i = 0; i <= n; i++)
			++(*this);
	}
	else
	{
		for (int i = 0; i <= (-n); i++)
			--(*this);
	}
	return (temp);
}

Fixed	Fixed::operator--(int n)
{
	Fixed	temp(*this);

	if (n >= 0)
	{
		for (int i = 0; i <= n; i++)
			--(*this);
	}
	else
	{
		for (int i = 0; i <= (-n); i++)
			++(*this);
	}
	return (temp);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	std::cout << "Static min function called" << std::endl;
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	std::cout << "Static max function called" << std::endl;
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	std::cout << "Static const min overload called" << std::endl;
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	std::cout << "Static const max overload called" << std::endl;
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}