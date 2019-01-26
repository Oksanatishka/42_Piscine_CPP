#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
  public:
	AssaultTerminator(void);
	virtual ~AssaultTerminator(void);
	virtual ISpaceMarine *clone(void) const;
	virtual void battleCry(void) const;
	virtual void rangedAttack(void) const;
	virtual void meleeAttack(void) const;

	AssaultTerminator &operator=(const AssaultTerminator &arg);
};

#endif
