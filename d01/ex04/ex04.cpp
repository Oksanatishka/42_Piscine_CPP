#include <iostream>

int		main( void )
{
	const std::string	brain("HI THIS IS BRAIN");
	const std::string*	brainPtr = &brain;
	const std::string&	brainRef = brain;

	std::cout << "Display string via pointer: " << *brainPtr << std::endl;
	std::cout << "Display string via reference: " << brainRef << std::endl;

	return 0;
}