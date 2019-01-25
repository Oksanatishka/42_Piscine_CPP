#include "Logger.hpp"

int		main( void )
{
	Logger	L("file.log");

	L.log("logToConsole", "asd");
	L.log("logToFile", "asd");

	return 0;
}
