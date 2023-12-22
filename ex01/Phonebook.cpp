/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:00:30 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 14:56:33 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.hpp"


void Phonebook::contactset(Contact contact, Phonebook phonebook){
	int i = getindex();
	if (i < 8)
	{
		indexset();
		tab[i] = contact;
	}
	else
	{
		tab[phonebook.getindex_vieux()] = contact;
		phonebook.setindex_vieux(phonebook);
	}
}

int Phonebook::getindex_vieux(){
	return (index_vieux);
}

void Phonebook::setindex_vieux(Phonebook phonebook){
	index_vieux = getindex_vieux() + 1;
}

int Phonebook::getindex(){
	return (index);
}

void Phonebook::indexset(){
	int i = getindex() + 1;
	index = i;
}

Contact Phonebook::getclass(int index){
	return (tab[index]);
}

Phonebook::Phonebook(){
	Phonebook::index = 0;
	Phonebook::index_vieux = 0;
	return ;
}
Phonebook::~Phonebook(){
	return ;
}


void Phonebook::search(Phonebook phonebook){
	Contact contact;
	int i = 0;
	int index = 0;

	std::string output;
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	while (i != phonebook.getindex())
	{
		contact = phonebook.getclass(i);
		output = contact.getFirstName();
		output = phonebook.truncate(phonebook, output);
		std::cout << "│" << std::setw(10) << std::right << i;
		std::cout << "│" << std::setw(10) << std::right << output;
		output = contact.getLastName();
		output = phonebook.truncate(phonebook, output);
		std::cout << "│" << std::setw(10) << std::right << output;
		output = contact.getPhoneNumber();
		output = phonebook.truncate(phonebook, output);
		std::cout << "│" << std::setw(10) << std::right << output;
		std::cout << "│" << std::setw(10) << std::right << std::endl;
		i++;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	std::cout << "Index :";
	std::cin >> index;
	while (index > i - 1 || index < 0)
	{
		std::cout << "Index valide svp :";
		std::cin >> index;
	}
	contact = phonebook.getclass(index);
	output = contact.getFirstName();
	std::cout << "First Name : "<< output << "\n";
	output = contact.getLastName();
	std::cout << "Last Name : "<< output << "\n";
	output = contact.getNickName();
	std::cout << "Nick Name : "<< output << "\n";
	output = contact.getPhoneNumber();
	std::cout << "Phone Number : "<< output << "\n";
	output = contact.getSecret();
	std::cout << "Secret : "<< output << "\n";
}

std::string Phonebook::truncate(Phonebook phonebook, std::string output)
{
	int i = 10;
	if (output.length() > 10)
	{
		output[9] = '.';
		while (output[i])
		{
			output[i] = '\0';
			i++;
		}
	}
	return (output);
}

