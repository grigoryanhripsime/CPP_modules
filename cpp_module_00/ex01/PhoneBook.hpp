#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int count;
	public:
		PhoneBook();
		~PhoneBook();
		void set_new_contact(int i);
		void get_contacts();
		int get_count();
		void print_contact(int index);
};