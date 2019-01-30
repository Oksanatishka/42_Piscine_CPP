#include "Dot.hpp"

Dot::Dot( void ) {}
Dot::Dot( std::list<int>::iterator &it ) : _it(&it) {}
Dot::Dot( const Dot &toCopy ) { *this = toCopy; }
Dot::~Dot( void ) {}
Dot			&Dot::operator=( const Dot &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void		Dot::exec( void )
{
	std::cout << static_cast<char>(**_it);
}
