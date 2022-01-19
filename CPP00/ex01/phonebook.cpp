/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:56:44 by user42            #+#    #+#             */
/*   Updated: 2022/01/19 15:33:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::add_contact()
{
	Contact new_index;

	new_index.new_contact();
	this->contact[size] = new_index;
	this->size += 1;
	if (this->size > 7)
		this->size = 7;
}

void	Phonebook::search_contact()
{
	int			index;
	std::string str_index;
	int			search_size;

	search_size = 0;
	std::cout << "Enter the index of one of the following contacts: "<< std::endl;
	while (search_size < this->size)
	{
		std::cout << std::setw(10) << search_size << "|";
		this->contact[search_size].get_info();
		search_size++;
	}
	std::getline(std::cin, str_index);
	std::istringstream(str_index) >> index;
	if (index < 0 || index > 7)
		std::cout << "Wrong Index"<< std::endl;
	else
		this->contact[index].display_contact();
}
