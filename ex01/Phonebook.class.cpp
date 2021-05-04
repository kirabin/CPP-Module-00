#include "Phonebook.class.hpp"

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
	cout << "_____________________________________________" << endl;
	cout << "|     index|first name| last name|  nickname|" << endl;
	for (int i=0; i < this->contacts_number; i++) {
		this->contacts[i].show_contact();
	}
}

void	Phonebook::search_contact() {
	int		index;

	cout << "Index: ";
	cin >> index;
	if (!cin.fail() && index < this->contacts_number) {
		this->contacts[index].show_all_info();
	} else {
		cout << "Error: " << ": no such index exists" << endl;
	}
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
