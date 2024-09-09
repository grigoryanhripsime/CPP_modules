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
int Contact::set_first_name(std::string first_name)
{
	if (first_name.length() == 0)
		return 0;
	this->first_name = first_name;
	return 1;
}

int Contact::set_last_name(std::string last_name)
{
	if (last_name.length() == 0)
		return 0;
	this->last_name = last_name;
	return 1;
}

int Contact::set_nickname(std::string nickname)
{
	if (nickname.length() == 0)
		return 0;
	this->nickname = nickname;
	return 1;
}

int Contact::set_phone_number(std::string phone_number)
{
	if (phone_number.length() == 0)
		return 0;
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
