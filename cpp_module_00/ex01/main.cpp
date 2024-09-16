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
		if (!std::cin.eof())
			std::cout<<"Enter the command: ";
		else
			break ;	
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (i == 7)
				i = 0;
			phonebook.set_new_contact(i);
			i++;
		}
		else if (command == "SEARCH")
		{
			if (phonebook.get_count() == 0)
			{
				std::cout<<"You don't have any contacts!!"<<std::endl;
				continue ;
			}
			phonebook.get_contacts();
			std::string index_str;
			while (1)
			{
				std::cout<<"Enter the index: ";
				std::getline(std::cin, index_str);
				if (std::cin.eof())
					break ;
				if (index_str.length() != 1 || index_str[0] <= '0' || index_str[0] - '0' > phonebook.get_count())
				{
					std::cout<<"Invalid input!!"<<std::endl;
					continue ;
				}
				phonebook.print_contact(index_str[0] - '0');
				break ;
			}
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout<<"Invalid input!!"<<std::endl;

	}
}
