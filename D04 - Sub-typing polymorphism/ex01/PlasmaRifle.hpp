#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
  private:
  public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	virtual void attack() const;
};

#endif