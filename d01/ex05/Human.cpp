#include "Human.hpp"

Human::Human( void )
{
	return ;
}

Human::~Human( void )
{
	return ;
}



std::string			Human::identify( void ) const
{
	return _brain.identify();
}

const Brain&		Human::getBrain( void ) const
{
	return _brain;
}
