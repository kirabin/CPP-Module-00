#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <string.h>
# include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;

class Contact {

public:
	Contact();
	~Contact();

	void	show_contact();
	void	show_all_info();
	void	fill_contact();

private:

	string	_truncate_string(string s);

	static int	instances;

	int		index;
	string	first_name;
	string	last_name;
	string	nickname;
	string	login;
	string	postal_address;
	string	email_address;
	string	birthday;
	string	date;
	string	favorite_meal;
	string	underwear_color;
	string	darkest_secret;
};

#endif
