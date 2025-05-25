#include "../includes/PhoneBook.hpp"

int main() {
	PhoneBook phonebook = PhoneBook();

	std::string command;
	while (true) {
		std::cout << "Enter command: ";
    std::cin >> command;
		if (command == "ADD") {
			phonebook.addContact();
		} else if (command == "SEARCH") {
			phonebook.searchContact();
		} else if (command == "PRINT") {
			phonebook.printContacts();
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command" << std::endl;
		}
	}
	return (0);
}
