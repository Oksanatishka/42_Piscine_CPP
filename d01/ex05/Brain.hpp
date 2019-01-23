#ifndef Brain_hpp
#define Brain_hpp

#include <string>
#include <sstream>

class Brain {

public:
	Brain( bool isSmart = false );
	~Brain( void );

	std::string		identify( void ) const;

private:
	bool				_isSmart;
	std::stringstream	_addres;

};

#endif
