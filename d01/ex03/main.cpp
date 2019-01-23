#include "ZombieHorde.hpp"

int		main( void )
{
	ZombieHorde		horde(10);

	horde.annonce();

	system("leaks -q a.out");
	return 0;
}
