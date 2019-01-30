// To complie the exercise: clang++ -Wall -Wextra -Werror Pony.cpp main.cpp
// Output:
// Karl is unicorn
// Piter is pony

#include "Pony.hpp"
#include <iostream>
// <cstdlib> (stdlib.h)
// This header defines several general purpose functions, including dynamic memory management, random number generation, 
// communication with the environment, integer arithmetics, searching, sorting and converting.
#include <cstdlib>

static void	ponyOnTheHeap( void )
{
	const Pony*	Karl = new Pony(true);

	std::cout << "Karl is " << (Karl->isUnicorn ? "unicorn" : "pony") << std::endl;

	delete Karl;
}

static void	ponyOnTheStack( void )
{
	const Pony	Piter;

	std::cout << "Piter is " << (Piter.isUnicorn ? "unicorn" : "pony") << std::endl;
}

int		main( void )
{
	ponyOnTheHeap();
	ponyOnTheStack();
	// int system (const char* command);		Invokes the command processor to execute a command.
	system("leaks -q a.out");
	return 0;
}
