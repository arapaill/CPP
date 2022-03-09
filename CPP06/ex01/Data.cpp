
#include "Data.hpp"

Data::Data(void) : _value(42)
{
	return ;
}

Data::Data(const Data &data)
{
	*this = data;
}

Data::~Data()
{
	return ;
}

Data	&Data::operator=(const Data &data)
{
	if (this != &data)
		this->_value = data._value;
	return (*this);
}

int	Data::getValue(void) const
{
	return (_value);
}