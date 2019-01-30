#ifndef MINUS_HPP
#define MINUS_HPP

#include <ICommands.hpp>

class Minus : public ICommands {

public:
	Minus( void );
	Minus( std::list<int>::iterator & );
	Minus( const Minus &toCopy );
	virtual ~Minus( void );

	Minus				&operator=( const Minus &toCopy );

	virtual void		exec( void );

private:
	std::list<int>::iterator	*_it;

};

#endif				// End of MINUS_HPP
