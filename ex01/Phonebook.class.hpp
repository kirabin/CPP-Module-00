#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string.h>
# include <iomanip>
# include "Contact.class.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

class	Phonebook {

public:
	Phonebook();
	~Phonebook();

	bool	add_new_contact();
	void	show_contacts();
	void	search_contact();

private:
	int			contacts_number;
	Contact		contacts[8];
};

// enum Command {exit, add, search};


// enum Search_field {index, first_name, last_name, nickname};


#endif
