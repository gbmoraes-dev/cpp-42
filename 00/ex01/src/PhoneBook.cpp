#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->count = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
	if (this->index >= 8)
		this->index = 0;
	if (this->index < 8) {
		this->contacts[this->index] = createContact();
		this->index++;
	}
	if (this->count < 8)
		this->count++;
}

void PhoneBook::searchContact() {
	int index;
	std::string input;

	std::cout << "     index|first name| last name|  nickname" << std::endl;

	for (int i = 0; i < this->count; i++) {
		std::cout << "         " << i << "|";
    std::cout.width(10);
    std::cout << this->contacts[i].getFirstName() << "|";
    std::cout.width(10);
    std::cout << this->contacts[i].getLastName() << "|";
    std::cout.width(10);
    std::cout << this->contacts[i].getNickname() << std::endl;
	}

	std::cout << "Enter index: ";
	std::cin >> input;

	index = atoi(input.c_str());

  if (index >= 0 && index < this->count) {
    this->contacts[index].printContact();
  } else {
    std::cout << "Invalid index" << std::endl;
  }
}

void PhoneBook::printContacts() {
	std::cout << "     index|first name| last name|  nickname" << std::endl;

	for (int i = 0; i < this->count; i++) {
		std::cout << "         " << i << "|";
    std::cout.width(10);
		std::cout << this->contacts[i].getFirstName() << "|";
    std::cout.width(10);
    std::cout << this->contacts[i].getLastName() << "|";
    std::cout.width(10);
    std::cout << this->contacts[i].getNickname() << std::endl;
	}
}

