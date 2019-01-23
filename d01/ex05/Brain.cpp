#include "Brain.hpp"

Brain::Brain( bool isSmart ) : _isSmart(isSmart)
{
	if (_isSmart || !_isSmart)
		_addres << this;
}

Brain::~Brain( void )
{
	return ;
}



std::string			Brain::identify( void ) const
{
	return _addres.str();
}
