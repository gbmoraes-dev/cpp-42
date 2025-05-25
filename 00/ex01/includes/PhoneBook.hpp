#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <stdlib.h>

class PhoneBook
{
	private:
		Contact contacts[8];
		int count;
		int index;

	public:
		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContact();
		void printContacts();
};

#endif
