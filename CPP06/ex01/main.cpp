
#include <stdint.h>
#include <iostream>
#include "Data.hpp"

int	main(void)
{
	Data		*data;
	uintptr_t	serialized;
	Data		*deserialized;

	data = new Data();
	std::cout << "data ptr = " << data << std::endl;
	std::cout << "value = " << data->getValue() << std::endl;

	serialized = reinterpret_cast<uintptr_t>(data);
	std::cout << "serialize:" << serialized << std::endl;

	deserialized = reinterpret_cast<Data *>(serialized);
	std::cout << "deserialize : " << deserialized << std::endl;
	std::cout << "value = " << deserialized->getValue() << std::endl;

	delete data;
	return (0);
}