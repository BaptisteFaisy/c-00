/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:22:31 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 15:08:12 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.hpp"

Contact::Contact()
{
	Contact::first_name = "0";
	Contact::last_name = "0";
	Contact::nickname = "0";
	Contact::phone_number = "0";
	Contact::darkest_secret = "0";
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstName() const
{
	return first_name;
}

std::string Contact::getLastName() const
{
	return last_name;
}

std::string Contact::getNickName() const
{
	return nickname;
}

std::string Contact::getPhoneNumber() const
{
	return phone_number;
}

std::string Contact::getSecret() const
{
	return darkest_secret;
}

void Contact::setFirstName(std::string name)
{
	first_name = name;
}

void Contact::setLastName(std::string name)
{
	last_name = name;
}

void Contact::setNickName(std::string name)
{
	nickname = name;
}

void Contact::setPhoneNumber(std::string number)
{
	phone_number = number;
}

void Contact::setSecret(std::string secret)
{
	darkest_secret = secret;
}

void Contact::add() 
{
	std::string input;

	std::cout << "Entrer le First Name : ";
	std::getline(std::cin, input);
	if (input == "")
		input = "0";
	setFirstName(input);
	std::cout << "Entrer le Last Name : ";
	std::getline(std::cin, input);
	if (input == "")
		input = "0";
	setLastName(input);
	std::cout << "Entrer le NickName : ";
	std::getline(std::cin, input);
	if (input == "")
		input = "0";
	setNickName(input);
	std::cout << "Entrer le PhoneNumber : ";
	std::getline(std::cin, input);
	if (input == "")
		input = "0";
	setPhoneNumber(input);
	std::cout << "Entrer le Secret : ";
	if (input == "")
		input = "0";
	std::getline(std::cin, input);
	setSecret(input);
}