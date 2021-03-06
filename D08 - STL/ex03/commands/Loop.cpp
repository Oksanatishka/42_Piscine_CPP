#include "Loop.hpp"

Loop::Loop( void ) {}
Loop::Loop( std::list<int> &stack, std::list<int>::iterator &it, std::string::iterator &i, std::string::iterator &j ) :
	_st(&stack), _it(&it), _raw(i, j) {}
Loop::Loop( const Loop &toCopy ) { *this = toCopy; }
Loop::~Loop( void ) {}
Loop		&Loop::operator=( const Loop &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void		Loop::exec( void )
{
	std::queue<ICommands*>		Q;
	std::list<int>::iterator	tmpIt = *_it;

	while( *tmpIt ) {
		parseRaw(*_st, *_it, Q, _raw);
		execQueue(Q);
	}
}
