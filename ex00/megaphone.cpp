/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:36:00 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/21 11:55:40 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i != ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] < 97 || av[i][j] > 122)
					std::cout << av[i][j];
				else
					std::cout << (char) toupper(av[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << "\n";
	return (0);
}