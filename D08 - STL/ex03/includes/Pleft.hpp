#ifndef PLEFT_HPP
#define PLEFT_HPP

#include <ICommands.hpp>

class Pleft : public ICommands {

public:
	Pleft( void );
	Pleft( std::list<int> &, std::list<int>::iterator & );
	Pleft( const Pleft &toCopy );
	virtual ~Pleft( void );

	Pleft				&operator=( const Pleft &toCopy );

	virtual void		exec( void );

private:
	std::list<int>				*_st;
	std::list<int>::iterator	*_it;

};

#endif				// End of PLEFT_HPP
