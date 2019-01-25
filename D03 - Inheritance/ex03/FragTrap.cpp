#include "FragTrap.hpp"

/*****************************************************************************/
/************************* Constructors and Destructors **********************/
/*****************************************************************************/

FragTrap::FragTrap( void ) :
	ClapTrap(),
	VaulthunterDotExe_attack_damage(0),
	Meme_attack_damage(1),
	Fart_attack_damage(1),
	Weed_attack_damage(1),
	Trololo_attack_damage(1),
	Laser_attack_damage(1)
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Commencing directive three! Uhntssuhntssuhntss..." << std::endl;
}

FragTrap::FragTrap( std::string name ) :
	ClapTrap( name, 100, 100, 100, 100, 1, 30, 20, 5 ),
	VaulthunterDotExe_attack_damage(0),
	Meme_attack_damage(1),
	Fart_attack_damage(1),
	Weed_attack_damage(1),
	Trololo_attack_damage(1),
	Laser_attack_damage(1)
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap( const FragTrap &toCopy )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Yes. Remember what? Are... are you my father?" << std::endl;
	*this = toCopy;
}

FragTrap::~FragTrap( void )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}


/*****************************************************************************/
/*************************** Overloaded Operators ****************************/
/*****************************************************************************/

FragTrap			&FragTrap::operator=( const FragTrap &toEquate )
{
	this->Hit_points = toEquate.Hit_points;
	this->Max_hit_points = toEquate.Max_hit_points;
	this->Energy_points = toEquate.Energy_points;
	this->Max_energy_points = toEquate.Max_energy_points;
	this->Level = toEquate.Level;
	this->Melee_attack_damage = toEquate.Melee_attack_damage;
	this->Ranged_attack_damage = toEquate.Ranged_attack_damage;
	this->Armor_damage_reduction = toEquate.Armor_damage_reduction;
	this->Name = toEquate.Name;

	return *this;
}


/*****************************************************************************/
/****************************** Private Methods ******************************/
/*****************************************************************************/

/*
** VaultHunter.EXE attacks
*/

unsigned int	FragTrap::memeAttack( const std::string &target ) const
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target;
	std::cout << " with memes, causing over " << this->Meme_attack_damage;
	std::cout << ( (this->Meme_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Meme_attack_damage;
}

unsigned int	FragTrap::fartAttack( const std::string &target ) const
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target;
	std::cout << " with a fart, causing " << this->Fart_attack_damage;
	std::cout << ( (this->Fart_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Fart_attack_damage;
}

unsigned int	FragTrap::weedAttack( const std::string &target ) const
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target;
	std::cout << " with a joint, causing " << this->Weed_attack_damage;
	std::cout << ( (this->Weed_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Weed_attack_damage;
}

unsigned int	FragTrap::trololoAttack( const std::string &target ) const
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target;
	std::cout << " with skittles, causing " << this->Trololo_attack_damage;
	std::cout << ( (this->Trololo_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Trololo_attack_damage;
}

unsigned int	FragTrap::laserAttack( const std::string &target ) const
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target;
	std::cout << " with a laser, causing " << this->Laser_attack_damage;
	std::cout << ( (this->Laser_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Laser_attack_damage;
}

/*****************************************************************************/
/****************************** Public Methods *******************************/
/*****************************************************************************/

/*
** VaultHunter.EXE method
*/

void			FragTrap::vaulthunter_dot_exe( const std::string &target )
{
	const unsigned int		fri(25);
	const std::string		funnyReferences[fri] = {
		"This time it'll be awesome, I promise!",
		"Hey everybody, check out my package!",
		"Place your bets!",
		"Defragmenting!",
		"Recompiling my combat code!",
		"Running the sequencer!",
		"It's happening... it's happening!",
		"It's about to get magical!",
		"I'm pulling tricks outta my hat!",
		"You can't just program this level of excitement!",
		"What will he do next?",
		"Things are about to get awesome!",
		"Let's get this party started!",
		"Glitchy weirdness is term of endearment, right?",
		"Push this button, flip this dongle, voila! Help me!",
		"square the I, carry the 1... YES!",
		"Resequencing combat protocols!",
		"Look out everybody, things are about to get awesome!",
		"I have an IDEA!",
		"Round and around and around she goes!",
		"It's like a box of chocolates...",
		"Step right up to the sequence of Trapping!",
		"Hey everybody, check out my package!",
		"Loading combat packages!",
		"F to the R to the 4 to the G to the WHAAT!"
	};
	const unsigned int		fti(5);

	typedef unsigned int (FragTrap::*FlagTrapMemberFucntion)(const std::string &) const;
	FlagTrapMemberFucntion p[fti] = {
		&FragTrap::memeAttack,
		&FragTrap::fartAttack,
		&FragTrap::weedAttack,
		&FragTrap::laserAttack,
		&FragTrap::trololoAttack
	};

	if ( this->Energy_points >= 25 ) {
		this->Energy_points -= 25;
		this->VaulthunterDotExe_attack_damage = \
		( this->*p[getRandomNumber(fti)] )(target);
		std::cout << "[" << this->Name << "] ";
		std::cout << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
	else {
		std::cout << "[" << this->Name << "] ";
		std::cout << "I can't launch VaultHunter.EXE coz i'm out of energy points(" << std::endl;
	}
}

/*
** Getters
*/

unsigned int	FragTrap::getVaulHunter_dot_exeDamage( void ) const
{
	return (this->VaulthunterDotExe_attack_damage);
}

unsigned int	FragTrap::getMemeAttackDamage( void ) const
{
	return (this->Meme_attack_damage);
}

unsigned int	FragTrap::getFartAttackDamage( void ) const
{
	return (this->Fart_attack_damage);
}

unsigned int	FragTrap::getWeedAttackDamage( void ) const
{
	return (this->Weed_attack_damage);
}

unsigned int	FragTrap::getTrololoAttackDamage( void ) const
{
	return (this->Trololo_attack_damage);
}

unsigned int	FragTrap::getLaserAttackDamage( void ) const
{
	return (this->Laser_attack_damage);
}
