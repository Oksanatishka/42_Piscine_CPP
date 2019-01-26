#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
  private:
	Sorcerer(void);
	std::string name;
	std::string title;

  public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &cpy);
	~Sorcerer();

	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(Victim const &v) const;
	Sorcerer &operator=(Sorcerer const &arg);
};

std::ostream &operator<<(std::ostream &flux, const Sorcerer &arg);

#endif