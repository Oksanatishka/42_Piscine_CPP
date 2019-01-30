#ifndef PLUS_HPP
#define PLUS_HPP

#include <ICommands.hpp>

class Plus : public ICommands {

public:
	Plus( void );
	Plus( std::list<int>::iterator & );
	Plus( const Plus &toCopy );
	virtual ~Plus( void );

	Plus				&operator=( const Plus &toCopy );

	virtual void		exec( void );

private:
	std::list<int>::iterator	*_it;

};

#endif				// End of PLUS_HPP
