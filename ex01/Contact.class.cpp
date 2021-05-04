#include "Contact.class.hpp"

Contact::Contact() {
	this->index = instances;
	Contact::instances++;
	cout << "Creating contact instance" << endl;
}

Contact::~Contact() {
	cout << "Destroying contact instance" << endl;
}

string	Contact::_truncate_string(string s) {
	if (s.length() <= 10) {
		return s;
	} else {
		return s.substr(0, 9) + '.';
	}
}

void	Contact::fill_contact() {
	cout << "first name: ";
	cin >> this->first_name;
	cin.ignore(10000, '\n');
	cout << "last name: ";
	cin >> this->last_name;
	cin.ignore(10000, '\n');
	cout << "nickname: ";
	cin >> this->nickname;
	cin.ignore(10000, '\n');
}

void	Contact::show_contact() {
	cout << "|";
	cout << setw(10) << this->index;
	cout << "|";
	cout << setw(10) << _truncate_string(this->first_name);
	cout << "|";
	cout << setw(10) << _truncate_string(this->last_name);
	cout << "|";
	cout << setw(10) << _truncate_string(this->nickname);
	cout << "|" << endl;
}

void	Contact::show_all_info() {
	cout << "first name: " << this->first_name << endl;
	cout << "last name: " << this->last_name << endl;
	cout << "nickname: " << this->nickname << endl;
	cout << "login: " << this->login << endl;
	cout << "postal address: " << this->postal_address << endl;
	cout << "email address: " << this->email_address << endl;
	cout << "birthday: " << this->birthday << endl;
	cout << "date: " << this->date << endl;
	cout << "favorite meal: " << this->favorite_meal << endl;
	cout << "underwear color: " << this->underwear_color << endl;
	cout << "darkest secret: " << this->darkest_secret << endl;
}

int		Contact::instances = 0;
