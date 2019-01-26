#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
  protected:
	std::string name;
	Victim();

  public:
	Victim(std::string name);
	Victim(Victim const &cpy);
	~Victim();

	std::string getName(void) const;
	void setName(std::string const arg);

	Victim &operator=(Victim const &arg);
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &flux, const Victim &arg);

#endif