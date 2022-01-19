/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:29:39 by user42            #+#    #+#             */
/*   Updated: 2022/01/19 15:35:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::new_contact()
{
	std::cout << "First name : " << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Last name : " << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname : " << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Phone Number : " << std::endl;
	std::getline(std::cin, this->phone_number);
	std::cout << "Darkest Secret : " << std::endl;
	std::getline(std::cin, this->darkest_secret);
}

std::string	Contact::check_width(std::string val)
{
	if (val.length() > 10)
		return (val.substr(0, 9) + '.');
	return (val);
}

void	Contact::get_info()
{
    std::cout << std::setw(10) << check_width(this->first_name) << "|";
    std::cout << std::setw(10) << check_width(this->last_name) << "|";
    std::cout << std::setw(10) << check_width(this->nickname) << "|";
    std::cout << std::endl;
}

void	Contact::display_contact()
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}