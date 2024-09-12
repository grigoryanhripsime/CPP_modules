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
		std::string command;
		std::cout<<"Enter the command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (i == 7)
				i = 0;
			phonebook.set_new_contact(i);
			i++;
		}
		if (command == "SEARCH")
		{
			phonebook.get_contacts();
				// std::cout<<"Enter the index: ";
		}
		if (command == "EXIT")
			break ;
	}
}