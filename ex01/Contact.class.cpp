#include "Contact.class.hpp"

string	Contact::_fields[11] = {
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"birthday",
	"date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

Contact::Contact() {
	this->index = instances;
	Contact::instances++;
	for (int i = first_field; i <= last_field; i++) {
		this->info[i] = "(none)";
	}
}

string	Contact::_truncate_string(string s) {
	if (s.length() <= 10) {
		return s;
	} else {
		return s.substr(0, 9) + '.';
	}
}

void	Contact::fill_contact() {

	for (int i = first_field; i <= last_field; i++) {
		cout << Contact::_fields[i] << ": ";
		// cin >> this->info[i];
		getline(cin, this->info[i]);
		if (cin.eof())  // TODO: should I handle EOF?
			exit(0);
	}
}

void	Contact::show_contact() {
	cout << "|";
	cout << setw(10) << this->index;
	cout << "|";
	cout << setw(10) << _truncate_string(this->info[first_name]);
	cout << "|";
	cout << setw(10) << _truncate_string(this->info[last_name]);
	cout << "|";
	cout << setw(10) << _truncate_string(this->info[nickname]);
	cout << "|" << endl;
}

void	Contact::show_all_info() {
	for (int i = first_field; i <= last_field; i++) {
		cout << Contact::_fields[i] << ": " << this->info[i] << endl;
	}
}

int		Contact::instances = 0;
