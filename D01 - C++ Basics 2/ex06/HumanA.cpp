#include "HumanA.hpp"

HumanA::HumanA( std::string name, const Weapon& type ) : _name(name), _weapon(type)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}



void				HumanA::attack( void ) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
