#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string.h>
# include <iomanip>

class Contact {

public:
	Contact();

	void	show_contact();
	void	show_all_info();
	void	fill_contact();

private:

	std::string	_truncate_string(std::string s);

	std::string	_info[11];
	int		_index;

	static int				_instances;
	static const int		_first_field;
	static const int		_last_field;
	static const std::string		_fields[11];
};

#endif
