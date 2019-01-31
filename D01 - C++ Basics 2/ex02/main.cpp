// To compile: clang++ -Wall -Wextra -Werror main.cpp Zombie.cpp ZombieEvent.cpp
#include "ZombieEvent.hpp"

int		main( void )
{
	ZombieEvent		ZombieEvent;
	Zombie			Foo("Foo", "beer");
	Zombie*			Karl = ZombieEvent.newZombie("Karl", "killer");

	ZombieEvent.setZombieType( &Foo, "bar");
	Foo.annonce();
	Karl->annonce();
	ZombieEvent.randomChump();
	ZombieEvent.randomChump();
	ZombieEvent.randomChump();

	delete Karl;

	system("leaks -q a.out");
	return 0;
}
