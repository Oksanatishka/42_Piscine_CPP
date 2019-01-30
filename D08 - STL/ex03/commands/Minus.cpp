#include "Minus.hpp"

Minus::Minus( void ) {}
Minus::Minus( std::list<int>::iterator &it ) : _it(&it) {}
Minus::Minus( const Minus &toCopy ) { *this = toCopy; }
Minus::~Minus( void ) {}
Minus		&Minus::operator=( const Minus &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void			Minus::exec( void )
{
	(**_it)--;
}
