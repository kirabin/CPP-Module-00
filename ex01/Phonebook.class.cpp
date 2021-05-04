#include "Phonebook.class.hpp"

Phonebook::Phonebook() : contacts_number(0) {
	cout << "Creating Phonebook" << endl;
}

Phonebook::~Phonebook() {
	cout << "Destroying Phonebook" << endl;
}

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
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (index < this->contacts_number) {
		this->contacts[index].show_all_info();
	} else {
		cout << "Error: " << ": no such index exists" << endl;
	}
	// is index exists
	// show contact by index line by line
}
