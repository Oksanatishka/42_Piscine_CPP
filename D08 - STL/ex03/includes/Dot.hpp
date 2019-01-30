#ifndef DOT_HPP
#define DOT_HPP

#include <ICommands.hpp>

class Dot : public ICommands {

public:
	Dot( void );
	Dot( std::list<int>::iterator & );
	Dot( const Dot &toCopy );
	virtual ~Dot( void );

	Dot					&operator=( const Dot &toCopy );

	virtual void		exec( void );

private:
	std::list<int>::iterator	*_it;

};

#endif				// End of DOT_HPP
