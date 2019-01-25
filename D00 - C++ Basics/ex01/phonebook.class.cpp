#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ) : gl_cont_iter(0)
{
	return ;
}

Phonebook::~Phonebook( void )
{
	return ;
}

void		Phonebook::add_contact( void )
{

	if (gl_cont_iter >= 8) {
		std::cout << "There are no more space for another contacts!" \
		<< std::endl;
		return ;
	}

	std::cout << "Enter the contact's first name: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].first_name);
	std::cout << "Enter the contact's last name: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].last_name);
	std::cout << "Enter the contact's nickname: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].nickname);
	std::cout << "Enter the contact's login: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].login);
	std::cout << "Enter the contact's postal address: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].postal_address);
	std::cout << "Enter the contact's email address: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].email_address);
	std::cout << "Enter the contact's phone number: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].phone_number);
	std::cout << "Enter the contact's birthday date: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].birthday_date);
	std::cout << "Enter the contact's favorite meal: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].favorite_meal);
	std::cout << "Enter the contact's underwear color: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].underwear_color);
	std::cout << "Enter the contact's darkest secret: ";
	std::getline(std::cin, gl_contacts[gl_cont_iter].darkest_secret);

	std::cout << std::endl;
	this->gl_cont_iter++;

}

void		Phonebook::table_out_helper( std::string str, \
			bool isstart, bool isend )
{

	if (str.length() > 10) {
		str.resize(9);
		str.resize(10, '.');
	}

	if (isstart) {
		std::cout << "|";
	}

	std::cout << std::right << std::setw(10) << str << "|";

	if (isend) {
		std::cout << std::endl;
	}
}

void		Phonebook::search_by_contacts( void )
{

	std::stringstream	to_ind;
	std::string			ind;

	std::cout << "+" << std::setw(11) << std::setfill('-') << "+" \
	<< std::setw(11) << "+" << std::setw(11) << "+" << std::setw(11) << "+" \
	<< std::endl << std::setfill(' ');

	std::cout << "|" << std::right << std::setw(10) << "Index" << "|" \
	<< std::right << std::setw(10) << "First name" << "|" \
	<< std::right << std::setw(10) << "Last name" << "|" \
	<< std::right << std::setw(10) << "Nickname" << "|" << std::endl;

	std::cout << "+" << std::setw(11) << std::setfill('-') << "+" \
	<< std::setw(11) << "+" << std::setw(11) << "+" << std::setw(11) << "+" \
	<< std::endl << std::setfill(' ');

	for ( int i = 0; i < gl_cont_iter; i++ ) {

		to_ind << i;
		ind = to_ind.str();
		table_out_helper(ind, true, false);
		table_out_helper(gl_contacts[i].first_name, false, false);
		table_out_helper(gl_contacts[i].last_name, false, false);
		table_out_helper(gl_contacts[i].nickname, false, true);
		to_ind.str(std::string());

	}

	std::cout << std::endl;

}