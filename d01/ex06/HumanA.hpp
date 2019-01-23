#ifndef HumanA_hpp
#define HumanA_hpp

#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:
	HumanA( std::string name, const Weapon& type );
	~HumanA( void );

	void				attack( void ) const;

private:
	const std::string	_name;
	const Weapon&		_weapon;

};

#endif
