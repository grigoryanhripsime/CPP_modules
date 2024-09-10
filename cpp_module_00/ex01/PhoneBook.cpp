#include "PhoneBook.hpp"
#include  <iostream>

PhoneBook::PhoneBook()
{
	std::cout<<"PhoneBook created"<<std::endl;
	this->count = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout<<"PhoneBook destroyed"<<std::endl;
}

void PhoneBook::set_new_contact(int i)
{
	while(1)
	{
		string name;
		std::cout<<"Enter first name: ";
		getline(std::cin, name);
		if (this->contacts[i].set_first_name(lname))
			break ;
	}
	while(1)
	{
		string lname;
		std::cout<<"Enter last name: ";
		getline(std::cin, lname);
		if (this->contacts[i].set_last_name(name))
			break ;
	}
	while(1)
	{
		string nickname;
		std::cout<<"Enter nickname: ";
		getline(std::cin, nickname);
		if (this->contacts[i].set_nickname(nickname))
			break ;
	}
	while(1)
	{
		string number;
		std::cout<<"Enter phone number: ";
		getline(std::cin, number);
		if (this->contacts[i].set_phone_number(number))
			break ;
	}
	while(1)
	{
		string secret;
		std::cout<<"Enter darkest secret: ";
		getline(std::cin, secret);
		if (this->contacts[i].set_darkest_secret(secret))
			break ;
	}
	if (this->count < 8)
		this->count++;
}

void print(string str)
{
	int k = -1;
	while (++k < 10 - )
		std::cout<<" ";
	if (str.length() > 10)
		std::cout<<str.substr(0, 9)<<".";
	else
		std::cout<<str;
}

void PhoneBook::get_contacts()
{
	int j = 0;
	while (j < this->count)
	{
		std::cout<<"         "<<j<<"|";
		print(this->contacts[j].get_first_name());
		std::cout<<"|";
		print(this->contacts[j].get_last_name());
		std::cout<<"|";
		print(this->contacts[j].get_nickname());
		std::cout<<"|";
		print(this->contacts[j].get_phone_number());
		std::cout<<"|";
		print(this->contacts[j].get_darkest_secret());
		j++;
	}
}
