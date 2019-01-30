#include "Comma.hpp"

Comma::Comma( void ) {}
Comma::Comma( std::list<int>::iterator &it ) : _it(&it) {}
Comma::Comma( const Comma &toCopy ) { *this = toCopy; }
Comma::~Comma( void ) {}
Comma		&Comma::operator=( const Comma &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void		Comma::exec( void )
{
	**_it = std::cin.get();
}
