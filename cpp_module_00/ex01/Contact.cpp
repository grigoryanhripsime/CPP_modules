#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
	std::cout<<"Contact created"<<std::endl;
}

Contact::~Contact()
{
	std::cout<<"Contact Destroyed"<<std::endl;
}

int contains_space(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return 1;
		i++;
	}
	return 0;
}

int Contact::set_first_name(std::string first_name)
{
	if (first_name.length() == 0 || contains_space(first_name))
		return 0;
	this->first_name = first_name;
	return 1;
}

int Contact::set_last_name(std::string last_name)
{
	if (last_name.length() == 0 || contains_space(last_name))
		return 0;
	this->last_name = last_name;
	return 1;
}

int Contact::set_nickname(std::string nickname)
{
	if (nickname.length() == 0 || contains_space(nickname))
		return 0;
	this->nickname = nickname;
	return 1;
}

int Contact::set_phone_number(std::string phone_number)
{
	if (phone_number.length() == 0)
		return 0;
	int i = 0;
	while (phone_number[i])
	{
		if (!((phone_number[i] >= '0' && phone_number[i] <= '9')
			|| phone_number[i] == '+'))
			return 0;
		i++;
	}
	this->phone_number = phone_number;
	return 1;
}

int Contact::set_darkest_secret(std::string darkest_secret)
{
	if (darkest_secret.length() == 0)
		return 0;
	this->darkest_secret = darkest_secret;
	return 1;
}

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_last_name()
{
	return this->last_name;
}

std::string Contact::get_nickname()
{
	return this->nickname;
}

std::string Contact::get_phone_number()
{
	return this->phone_number;
}

std::string Contact::get_darkest_secret()
{
	return this->darkest_secret;
}
