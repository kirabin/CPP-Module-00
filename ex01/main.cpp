#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

string	get_command() {
	string	command;

	cout << "phonebook > ";
	getline(cin, command);
	if (cin.eof()) {
		exit(0);
	}
	return command;
}

bool	is_allowed_command(string command) {
	if (command == "EXIT") {
		return true;
	} else if (command == "ADD") {
		return true;
	} else if (command == "SEARCH") {
		return true;
	}
	return false;
}

int	main(void) {
	string		command;
	Phonebook	phonebook;

	while (true) {
		command = get_command();
		if (command.empty())
			continue;
		if (command == "EXIT") {
			break ;
		} else if (command == "ADD") {

			if (!phonebook.add_new_contact())
				cout << "Error: too many contacts" << endl;

		} else if (command == "SEARCH") {
			phonebook.show_contacts();
			phonebook.search_contact();
		} else {
			cout << "Error: unknown command, try ADD/EXIT/SEARCH" << endl;
		}
	}
	return 0;
}
