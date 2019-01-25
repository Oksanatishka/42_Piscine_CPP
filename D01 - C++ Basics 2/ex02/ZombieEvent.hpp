#ifndef ZombieEvent_hpp
#define ZombieEvent_hpp

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent {

public:
	ZombieEvent( void );
	~ZombieEvent( void );

	void			setZombieType( Zombie* theZombie, std::string type );
	Zombie*			newZombie( std::string name, std::string type );
	void			randomChump( void );

private:
	std::string		makeRandomString( bool startFromCapital );

};

#endif
