#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	return ;
}

ZombieEvent::~ZombieEvent( void )
{
	return ;
}



std::string		ZombieEvent::makeRandomString( bool startFromCapital )
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



void			ZombieEvent::randomChump( void )
{
	Zombie			randomZombie(makeRandomString(true), makeRandomString(false));

	randomZombie.annonce();
}

void			ZombieEvent::setZombieType( Zombie* theZombie, std::string type )
{
	theZombie->setType(type);
}

Zombie*			ZombieEvent::newZombie( std::string name, std::string type )
{
	Zombie*	newZombie = new Zombie(name, type);

	return newZombie;
}
