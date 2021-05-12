#include "Contact.hpp"

int				Contact::_instances = 0;
const int		Contact::_first_field= 0;
const int		Contact::_last_field = 10;

const std::string	Contact::_fields[11] = {
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
	this->_index = Contact::_instances;
	Contact::_instances++;
	for (int i = Contact::_first_field; i <= Contact::_last_field; i++) {
		this->_info[i] = "(none)";
	}
}

std::string	Contact::_truncate_string(std::string s) {
	if (s.length() <= 10) {
		return s;
	} else {
		return s.substr(0, 9) + '.';
	}
}

void	Contact::fill_contact() {
	for (int i = Contact::_first_field; i <= Contact::_last_field; i++) {
		std::cout << Contact::_fields[i] << ": ";
		getline(std::cin, this->_info[i]);
		if (std::cin.eof())
			exit(0);
	}
}

void	Contact::show_contact() {
	std::cout << "|";
	std::cout << std::setw(10) << this->_index;
	std::cout << "|";
	std::cout << std::setw(10) << _truncate_string(this->_info[0]);
	std::cout << "|";
	std::cout << std::setw(10) << _truncate_string(this->_info[1]);
	std::cout << "|";
	std::cout << std::setw(10) << _truncate_string(this->_info[2]);
	std::cout << "|" << std::endl;
}

void	Contact::show_all_info() {
	for (int i = Contact::_first_field; i <= Contact::_last_field; i++) {
		std::cout << Contact::_fields[i] << ": " << this->_info[i] << std::endl;
	}
}
