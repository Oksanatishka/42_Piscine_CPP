#ifndef ICOMMAND_HPP
#define ICOMMAND_HPP

#include <list>
#include <queue>
#include <string>
#include <iostream>

class ICommands {

public:
	virtual ~ICommands( void ) {}

	virtual void	exec( void ) = 0;

};

#endif				// End of ICOMMAND_HPP
