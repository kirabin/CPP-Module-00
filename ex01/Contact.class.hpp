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
using std::getline;

class Contact {

public:
	Contact();

	void	show_contact();
	void	show_all_info();
	void	fill_contact();

private:

	string	_truncate_string(string s);

	string	info[11];
	int		index;

	static int		instances;
	static string	_fields[11];

	enum Fields {
		first_name,
		last_name,
		nickname,
		login,
		postal_address,
		email_address,
		birthday,
		date,
		favorite_meal,
		underwear_color,
		darkest_secret,
		first_field = first_name,
		last_field = darkest_secret
	};
};

#endif
