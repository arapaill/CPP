/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:07:55 by user42            #+#    #+#             */
/*   Updated: 2022/01/14 13:46:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const **argv)
{
    int     i = 0;
    int     j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (++i < argc)
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char)toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return (0);
}
