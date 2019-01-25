#include "Phonebook.class.hpp"

int			main( void )
{

	std::string		command;
	Phonebook		instance;

	while (std::cin) {
		std::cout << "Please, enter the command: ";
		std::getline(std::cin, command);
		if ( command == "EXIT" ) return 1;
		else if ( command == "ADD" ) instance.add_contact();
		else if ( command == "SEARCH" ) instance.search_by_contacts();
	}
	// std::cout << "^D" << std::endl;
	(std::operator<<(std::cout, "^D")).operator<<(std::endl);
	
	return 0;

}