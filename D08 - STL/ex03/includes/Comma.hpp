#ifndef COMMA_HPP
#define COMMA_HPP

#include <ICommands.hpp>

class Comma : public ICommands {

public:
	Comma( void );
	Comma( std::list<int>::iterator & );
	Comma( const Comma &toCopy );
	virtual ~Comma( void );

	Comma				&operator=( const Comma &toCopy );

	virtual void		exec( void );

private:
	std::list<int>::iterator	*_it;

};

#endif				// End of COMMA_HPP
