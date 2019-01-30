#include "span.hpp"

int main(void)
{
	{
		span sp = span(5);
		try
		{
			span spErr = span(1);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		span spShort = span(2);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try
		{
			spShort.addNumber(1);
			spShort.addNumber(2);
			spShort.addNumber(3);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		sp.print();

		std::cout << sp.shortestspan() << std::endl;
		std::cout << sp.longestspan() << std::endl;
	}
	{
		span sp = span(15);
		span spShort = span(5);
		int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

		try
		{
			spShort.addNumber(ia, ia + 9);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		sp.addNumber(ia, ia + 9);

		sp.print();

		std::cout << sp.shortestspan() << std::endl;
		std::cout << sp.longestspan() << std::endl;
	}

	return 0;
}
