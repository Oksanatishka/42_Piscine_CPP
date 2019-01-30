#include <Classes.hpp>

Base *generate(void)
{
	srand(time(NULL));
	const int i = rand() % 3;

	if (i == 0)
		return new A();
	else if (i == 1)
		return new B();
	else
		return new C();
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &r)
{
	try
	{
		static_cast<void>(dynamic_cast<A &>(r));
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast &b)
	{
	}

	try
	{
		static_cast<void>(dynamic_cast<B &>(r));
		std::cout << "B" << std::endl;
	}
	catch (const std::bad_cast &b)
	{
	}

	try
	{
		static_cast<void>(dynamic_cast<C &>(r));
		std::cout << "C" << std::endl;
	}
	catch (const std::bad_cast &b)
	{
	}
}

int main(void)
{
	Base *b;

	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;

	return 0;
}
