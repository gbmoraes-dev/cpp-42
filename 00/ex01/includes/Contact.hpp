#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <limits>

class Contact 	{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();

		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		void printContact();
};

Contact createContact();

#endif
