#include <iomanip>
#include <iostream>

template <typename Addr>
void iter(Addr *address, std::size_t length, void (*f)(Addr &))
{
	for (std::size_t i = 0; i < length; i++)
	{
		(*f)(address[i]);
	}
}

template <typename Addr>
void print(Addr &arr)
{
	std::cout << arr << std::endl;
}

template <typename Addr>
int templateComparsion(const void *a, const void *b)
{
	if (*(reinterpret_cast<const Addr *>(a)) < *(reinterpret_cast<const Addr *>(b)))
		return -1;
	else if (*(reinterpret_cast<const Addr *>(a)) > *(reinterpret_cast<const Addr *>(b)))
		return 1;
	return 0;
}

int main(void)
{
	int decimals[] =
		{
			1657823456, 1234876567, 114, 12412, 122433, 2341234, 12348765, 1867545678, 1865723, 12867890};
	float floats[] =
		{
			70912345.67, 70123456.78, 70891234567.89, 890612345678.90, 47561.057640, 7651.27640, 789612.30, 16982.349, 1269873.8745, 68791234.5687};
	std::string strings[] =
		{
			"KasdsLMNO", "asdPasdQasdRSTU", "DadssddEF", "GHasdasdsdIJ", "dasadA", "BadadsasdasdC", "VWasdadsXYZ"};
	char letters[] =
		{
			'D', 'E', 'F', 'G', 'H', 'I', 'J', 'A', 'B', 'C', 'K', 'L', 'M'};

	std::cout << "Array of strings:" << std::endl;
	iter<std::string>(strings, 7, &print<std::string>);

	std::cout << std::endl
			  << "Array of chars:" << std::endl;
	iter<char>(letters, 13, &print<char>);

	std::cout << std::endl
			  << "Array of ints:" << std::endl;
	iter<int>(decimals, 10, &print<int>);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl
			  << "Array of floats:" << std::endl;
	iter<float>(floats, 10, &print<float>);

	std::cout << std::endl
			  << std::endl
			  << std::endl
			  << "Sorting... "
				 "Sorting... "
				 "Sorting... "
				 "Sorting... "
			  << std::endl
			  << std::endl
			  << std::endl
			  << std::endl;
	qsort(strings, 7, sizeof(std::string), &templateComparsion<std::string>);
	qsort(letters, 13, sizeof(char), &templateComparsion<char>);
	qsort(decimals, 10, sizeof(int), &templateComparsion<int>);
	qsort(floats, 10, sizeof(float), &templateComparsion<float>);

	std::cout << "Array of strings:" << std::endl;
	iter<std::string>(strings, 7, &print<std::string>);

	std::cout << std::endl
			  << "Array of chars:" << std::endl;
	iter<char>(letters, 13, &print<char>);

	std::cout << std::endl
			  << "Array of ints:" << std::endl;
	iter<int>(decimals, 10, &print<int>);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl
			  << "Array of floats:" << std::endl;
	iter<float>(floats, 10, &print<float>);

	return (0);
}
