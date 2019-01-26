#include "Peon.hpp"

Peon::Peon(void)
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &cpy) : Victim(cpy)
{
	std::cout << "Zog zog." << std::endl;
	*this = cpy;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}
