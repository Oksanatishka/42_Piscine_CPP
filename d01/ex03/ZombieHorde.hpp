#ifndef ZombieHorde_hpp
#define ZombieHorde_hpp

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde {

public:
	ZombieHorde( int N );
	~ZombieHorde( void );

	void			annonce( void );

private:
	int			_numberOfZombies;
	Zombie*		_zombies;

	std::string		makeRandomString( bool startFromCapital );

};

#endif
