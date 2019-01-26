#include "Victim.hpp"

Victim::Victim(void)
{
}

Victim::Victim(std::string name) : name(name)
{
	std::cout << "Some random victim called " << this->name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &cpy)
{
	*this = cpy;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

Victim &Victim::operator=(Victim const &arg)
{
	this->name = arg.getName();
	return (*this);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName(void) const
{
	return (this->name);
}
void Victim::setName(std::string const arg)
{
	this->name = arg;
}

std::ostream &operator<<(std::ostream &os, const Victim &vic)
{
	os << "I'm " << vic.getName() << " and I like otters !" << std::endl;
	return (os);
}