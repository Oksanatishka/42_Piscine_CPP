#include "easyfind.hpp"

int main(void)
{
	int myints[4] = {10, 20, 30, 40};
	std::vector<int> myvector(myints, myints + 4);
	std::list<int> mylist(myints, myints + 4);
	std::deque<int> mydeque(myints, myints + 4);

	try
	{
		std::cout << "Element found in myvector: " << *(easyfind(myvector, 10)) << std::endl;
		std::cout << "Element found in myvector: " << *(easyfind(myvector, 20)) << std::endl;
		std::cout << "Element found in myvector: " << *(easyfind(myvector, 40)) << std::endl;
		std::cout << "Element found in mylist: " << *(easyfind(mylist, 40)) << std::endl;
		std::cout << "Element found in mylist: " << *(easyfind(mylist, 20)) << std::endl;
		std::cout << "Element found in mylist: " << *(easyfind(mylist, 30)) << std::endl;
		std::cout << "Element found in mydeque: " << *(easyfind(mydeque, 20)) << std::endl;
		std::cout << "Element found in mydeque: " << *(easyfind(mydeque, 11)) << std::endl;
		std::cout << "Element found in mydeque: " << *(easyfind(mydeque, 10)) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "No such number in sequence" << std::endl;
	}

	return 0;
}