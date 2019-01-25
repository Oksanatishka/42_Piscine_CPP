#include <iostream>

int			main( int ac, char **av ) {

	int		length;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}

	for ( size_t i = 1; i < ac; i++ ) {

		length = strlen(av[i]);
		for ( size_t g = 0; g < length; g++ ) {
			av[i][g] = toupper( av[i][g] );
		}

		std::cout << av[i];

	}
	std::cout << std::endl;

	return 0;

}