// To compile: clang++ -Wall -Wextra -Werror main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main( void )
{
	// In HumanA, reference is better since the Weapon exists from creation until destruction and never changes.
	{
		Weapon		club = Weapon("crude spiked club");
		HumanA		bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	// In HumanB, only the pointer is acceptable, since the field is not set at creation time, so it can't be a reference.
	{
		Weapon		club = Weapon("crude spiked club");
		HumanB		jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}
