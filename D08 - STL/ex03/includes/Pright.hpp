#ifndef PRIGHT_HPP
#define PRIGHT_HPP

#include <ICommands.hpp>

class Pright : public ICommands {

public:
	Pright( void );
	Pright( std::list<int> &, std::list<int>::iterator & );
	Pright( const Pright &toCopy );
	virtual ~Pright( void );

	Pright				&operator=( const Pright &toCopy );

	virtual void		exec( void );

private:
	std::list<int>				*_st;
	std::list<int>::iterator	*_it;

};

#endif				// End of PRIGHT_HPP
