#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
  private:
	Peon();

  public:
	Peon(std::string name);
	Peon(Peon const &cpy);
	~Peon();

	virtual void getPolymorphed() const;
};

#endif
