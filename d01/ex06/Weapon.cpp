#include "Weapon.hpp"

Weapon::Weapon( std::string type_ ) : type(type_)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}


const std::string&		Weapon::getType( void ) const
{
	return type;
}

void					Weapon::setType( std::string type_ )
{
	type = type_;
}
