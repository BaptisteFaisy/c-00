/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:57:38 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 14:54:56 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.hpp"

int main(void){
	Contact contact;
	Phonebook phonebook;
	std::string input;
	std::getline(std::cin, input);
	if (input == "ADD")
	{
		contact.add();
		phonebook.contactset(contact, phonebook);
	}
	else if (input == "SEARCH")
		std::cout << "Vous n'avez pas d'amis :(\n";
	else if (input == "EXIT")
		return (0);
	while (true)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			contact.add();
			phonebook.contactset(contact, phonebook);
		}
		else if (input == "SEARCH")
			phonebook.search(phonebook);
		else if (input == "EXIT")
			return (0);
	}
}

