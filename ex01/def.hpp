/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   def.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:59:34 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 14:52:23 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HPP
#define DEF_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private :
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public :
	Contact();
	~Contact();
	
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string	getPhoneNumber() const;
	std::string getSecret() const;
	
	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setNickName(std::string name);
	void setPhoneNumber(std::string number);
	void setSecret(std::string secret);

	void add();
};

class Phonebook
{
public :
	Phonebook();
	~Phonebook();

	int getindex();
	int getindex_vieux();
	Contact getclass(int index);

	void indexset();
	void setindex_vieux(Phonebook phonebook);
	void contactset(Contact contact, Phonebook phonebook);

	std::string truncate(Phonebook phonebook, std::string output);
	void search(Phonebook phonebook);
private :
	Contact tab[8];
	int index;
	int index_vieux;
};

#endif