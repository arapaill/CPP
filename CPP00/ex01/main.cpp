/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:13:26 by user42            #+#    #+#             */
/*   Updated: 2022/01/19 14:32:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	int			exit = 1;
	Phonebook	phonebook;
	std::string	cmd;

	while (exit)
	{
		std::cout << "Please write one of the following command: ADD, EXIT, SEARCH " << std::endl;
		if (!std::getline(std::cin, cmd))
            return (0);
		if (cmd == "EXIT")
			exit = 0;
		else if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.search_contact();
	}
	return (0);
}