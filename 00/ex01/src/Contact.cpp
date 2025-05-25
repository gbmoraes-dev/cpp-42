#include "../includes/Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getNickname() {
	return this->nickname;
}

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret() {
	return this->darkestSecret;
}

void Contact::printContact() {
    std::cout << "first name: " << this->firstName << std::endl;
    std::cout << "last name: " << this->lastName << std::endl;
    std::cout << "nickname: " << this->nickname << std::endl;
    std::cout << "phone number: " << this->phoneNumber << std::endl;
    std::cout << "darkest secret: " << this->darkestSecret << std::endl;
}

Contact createContact() {
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()) {
		std::cout << "All fields are required. Creation aborted." << std::endl;
		return Contact();
	}

	return Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}




