#include "Phonebook.hpp"

Phonebook::Phonebook() : contacts_number(0) {}

bool	Phonebook::add_new_contact() {
	if (this->contacts_number < 8) {
		this->contacts[contacts_number].fill_contact();
		this->contacts_number++;
		return (true);
	}
	else {
		return (false);
	}
}

void	Phonebook::show_contacts() {
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i=0; i < this->contacts_number; i++) {
		this->contacts[i].show_contact();
	}
}

void	Phonebook::search_contact() {
	int		index;

	std::cout << "Index: ";
	std::cin >> index;
	if (!std::cin.fail() && index < this->contacts_number && index >= 0) {
		this->contacts[index].show_all_info();
	} else {
		std::cout << "Error: " << ": no such index exists" << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
