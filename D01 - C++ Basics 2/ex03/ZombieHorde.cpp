#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int N ) : _numberOfZombies(N)
{
	_zombies = new Zombie[_numberOfZombies];

	for ( int i = 0; i < _numberOfZombies; i++ ) {
		_zombies[i].setName(makeRandomString(true));
		_zombies[i].setType(makeRandomString(false));
	}
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] _zombies;
}



std::string		ZombieHorde::makeRandomString( bool startFromCapital )
{
	int				terminator = rand() % 10;
	char			randomName[terminator + 1];

	for ( int i = 0; i < terminator; i++ ) {
		randomName[i] = rand() % 25 + ((startFromCapital) ? 65 : 97);
	}
	randomName[terminator] = '\0';

	std::string rNS(randomName);
	return rNS;
}



void			ZombieHorde::annonce( void )
{
	for ( int i = 0; i < _numberOfZombies; i++ ) {
		_zombies[i].annonce();
	}
}
