#include "Phonebook.hpp"
#include "Contact.hpp"

std::string	get_command() {
	std::string	command;

	std::cout << "phonebook > ";
	std::getline(std::cin, command);
	if (std::cin.eof()) {
		exit(0);
	}
	return command;
}

bool	is_allowed_command(std::string command) {
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
	std::string		command;
	Phonebook	phonebook;

	while (true) {
		command = get_command();
		if (command.empty())
			continue;
		if (command == "EXIT") {
			break ;
		} else if (command == "ADD") {

			if (!phonebook.add_new_contact())
				std::cout << "Error: too many contacts" << std::endl;

		} else if (command == "SEARCH") {
			phonebook.show_contacts();
			phonebook.search_contact();
		} else {
			std::cout << "Error: unknown command, try ADD/EXIT/SEARCH" << std::endl;
		}
	}
	return 0;
}
