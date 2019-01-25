#ifndef Weapon_hpp
#define Weapon_hpp

#include <string>

class Weapon {

public:
	Weapon( std::string type_ );
	~Weapon( void );

	const std::string&	getType( void ) const;
	void				setType( std::string type_ );

private:
	std::string			type;

};

#endif
