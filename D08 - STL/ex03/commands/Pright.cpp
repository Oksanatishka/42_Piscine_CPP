#include "Pright.hpp"

Pright::Pright( void ) {}
Pright::Pright( std::list<int> &stack, std::list<int>::iterator &it ) : _st(&stack), _it(&it) {}
Pright::Pright( const Pright &toCopy ) { *this = toCopy; }
Pright::~Pright( void ) {}
Pright		&Pright::operator=( const Pright &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void			Pright::exec( void )
{
	if ( std::next(*_it) == _st->end() ) {
		_st->push_back(0);
	}
	(*_it)++;
}
