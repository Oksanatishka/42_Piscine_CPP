#include <Array.hpp>
#include <iostream>

int main(void)
{
	Array<int> Ints1;
	Array<int> Ints2(22);

	std::cout << "Try to cause an exception: " << std::endl;
	try
	{
		static_cast<void>(Ints1[12]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Attempt to get access to another's memory..." << std::endl;
	try
	{
		static_cast<void>(Ints1[34679]);
		static_cast<void>(Ints1[324322]);
		static_cast<void>(Ints1[2352353]);
		static_cast<void>(Ints1[99999999]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Size of first int array before equating: " << Ints1.size() << std::endl;
	Ints1 = Ints2;
	std::cout << "And after: " << Ints1.size() << std::endl;

	std::cout << std::endl
			  << "Content of first array: ";
	for (uint i = 0; i < Ints1.size(); i++)
	{
		std::cout << Ints1[i] << std::endl;
	}
	std::cout << std::endl
			  << std::endl
			  << "Content of the second array: ";
	for (uint i = 0; i < Ints2.size(); i++)
	{
		std::cout << Ints2[i] << std::endl;
	}

	return 0;
}
