#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : name("Unknown")
{
	std::cout << name << ", is not born, what did you expect ?" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
	: name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &cpy)
{
	*this = cpy;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &arg)
{
	this->name = arg.getName();
	this->name = arg.getTitle();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &soc)
{
	os << "I am " << soc.getName() << ", " << soc.getTitle() << ", and I like ponies !" << std::endl;
	return (os);
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::string Sorcerer::getName(void) const
{
	return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}
