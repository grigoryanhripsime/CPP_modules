#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main(void)
{
	PhoneBook phonebook;
	int i = 0;

	while (1)
	{
		string command;
		std::cout<<"Enter the command: ";
		std::getline(std::cin, name);
		if (command == "ADD")
		{
			if (i == 7)
				i = 0;
			phonebook.set_new_contact(i);
			i++;
			break ;
		}
		if (command == "SEARCH")
		{
			while (1)
			{
				phonebook.get_contacts();
				// std::cout<<"Enter the index: ";
			}
			break ;
		}
		if (command == "EXIT")
			break ;
	}
}