#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string.h>
# include <iomanip>
# include "Contact.hpp"

class	Phonebook {

public:
	Phonebook();

	bool	add_new_contact();
	void	show_contacts();
	void	search_contact();

private:
	int			contacts_number;
	Contact		contacts[8];
};

#endif
