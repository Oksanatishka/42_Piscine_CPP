#include "Plus.hpp"

Plus::Plus( void ) {}
Plus::Plus( std::list<int>::iterator &it ) : _it(&it) {}
Plus::Plus( const Plus &toCopy ) { *this = toCopy; }
Plus::~Plus( void ) {}
Plus		&Plus::operator=( const Plus &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void			Plus::exec( void )
{
	(**_it)++;
}
