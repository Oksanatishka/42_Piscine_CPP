#include "Fixed.hpp"

static void		putUsage( const std::string &err )
{
	if ( ! err.empty() ) {
		stf::cout << err <<std::endl;
	}

	stf::cout << "usage: ./eval_expr \"( 18.18 + 3.03 ) * 2\"" <<std::endl;

	exit(1);
}

static void		checkExpr( char *av1 )
{

}

int				main( int ac, char *av[] )
{
	if ( ac == 1 )			putUsage("ERROR: too few arguments");
	else if ( ac > 2 )		putUsage("ERROR: too much arguments");

	checkExpr(av[1]);


	return 0;
}
