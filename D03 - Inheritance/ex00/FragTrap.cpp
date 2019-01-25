#include "FragTrap.hpp"

/*****************************************************************************/
/************************* Constructors and Destructors **********************/
/*****************************************************************************/

FragTrap::FragTrap( void ) :
	Name("FR4G-TP"),
	Hit_points(100),
	Max_hit_points(100),
	Energy_points(100),
	Max_energy_points(100),
	Level(1),
	Melee_attack_damage(30),
	Ranged_attack_damage(20),
	Armor_damage_reduction(5),
	VaulthunterDotExe_attack_damage(0),
	Meme_attack_damage(1),
	Fart_attack_damage(1),
	Weed_attack_damage(1),
	Trololo_attack_damage(1),
	Laser_attack_damage(1)
{
	std::cout << "Commencing directive three! Uhntssuhntssuhntss..." << std::endl;
}


FragTrap::FragTrap( std::string name ) :
	Name(name),
	Hit_points(100),
	Max_hit_points(100),
	Energy_points(100),
	Max_energy_points(100),
	Level(1),
	Melee_attack_damage(30),
	Ranged_attack_damage(20),
	Armor_damage_reduction(5),
	VaulthunterDotExe_attack_damage(0),
	Meme_attack_damage(1),
	Fart_attack_damage(1),
	Weed_attack_damage(1),
	Trololo_attack_damage(1),
	Laser_attack_damage(1)
{
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap &toCopy )
{
	std::cout << "Yes. Remember what? Are... are you my father?" << std::endl;
	*this = toCopy;
}

FragTrap::~FragTrap( void )
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}


/*****************************************************************************/
/*************************** Overloaded Operators ****************************/
/*****************************************************************************/

FragTrap			&FragTrap::operator=( const FragTrap &toEquate )
{
	this->Name = toEquate.Name;
	this->Hit_points = toEquate.Hit_points;
	this->Max_hit_points = toEquate.Max_hit_points;
	this->Energy_points = toEquate.Energy_points;
	this->Max_energy_points = toEquate.Max_energy_points;
	this->Level = toEquate.Level;
	this->Melee_attack_damage = toEquate.Melee_attack_damage;
	this->Ranged_attack_damage = toEquate.Ranged_attack_damage;
	this->Armor_damage_reduction = toEquate.Armor_damage_reduction;
	this->VaulthunterDotExe_attack_damage = toEquate.VaulthunterDotExe_attack_damage;
	this->Meme_attack_damage = toEquate.Meme_attack_damage;
	this->Fart_attack_damage = toEquate.Fart_attack_damage;
	this->Weed_attack_damage = toEquate.Weed_attack_damage;
	this->Trololo_attack_damage = toEquate.Trololo_attack_damage;
	this->Laser_attack_damage = toEquate.Laser_attack_damage;

	return *this;
}


/*****************************************************************************/
/****************************** Private Methods ******************************/
/*****************************************************************************/

/*
** Methods for getting random values
*/

int					FragTrap::getRandomNumber( const unsigned int amount ) const
{
	srand(clock());
	const int		i = ( rand() % amount );

	return ( (i >= 0) ? i : 0 );
}

/*
** VaultHunter.EXE attacks
*/

unsigned int	FragTrap::memeAttack( const std::string &target ) const
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target;
	std::cout << " with memes, causing over " << this->Meme_attack_damage;
	std::cout << ( (this->Meme_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Meme_attack_damage;
}

unsigned int	FragTrap::fartAttack( const std::string &target ) const
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target;
	std::cout << " with a fart, causing " << this->Fart_attack_damage;
	std::cout << ( (this->Fart_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Fart_attack_damage;
}

unsigned int	FragTrap::weedAttack( const std::string &target ) const
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target;
	std::cout << " with a joint, causing " << this->Weed_attack_damage;
	std::cout << ( (this->Weed_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Weed_attack_damage;
}

unsigned int	FragTrap::trololoAttack( const std::string &target ) const
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target;
	std::cout << " with skittles, causing " << this->Trololo_attack_damage;
	std::cout << ( (this->Trololo_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Trololo_attack_damage;
}

unsigned int	FragTrap::laserAttack( const std::string &target ) const
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target;
	std::cout << " with a laser, causing " << this->Laser_attack_damage;
	std::cout << ( (this->Laser_attack_damage < 2) ? " point of damage ! " : " points of damage ! " );
	return this->Laser_attack_damage;
}

/*****************************************************************************/
/****************************** Public Methods *******************************/
/*****************************************************************************/

/*
** FragTrap attacks
*/

void			FragTrap::rangedAttack( const std::string &target ) const
{
	const unsigned int	fri(6);
	const std::string	funnyReferences[fri] = {
		"Pop pop!",
		"Crit-i-cal!",
		"That looks like it hurts!",
		"WOW! I hit 'em!",
		"Extra ouch!",
		"Shwing!"
	};

	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing ";
	std::cout << this->Ranged_attack_damage << " points of damage ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
}

void			FragTrap::meleeAttack( const std::string &target ) const
{
	const unsigned int	fri(4);
	const std::string	funnyReferences[fri] = {
		"Hyah!",
		"Heyyah!",
		"Take that!",
		"Bop!"
	};

	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing ";
	std::cout << this->Melee_attack_damage << " points of damage ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
}

/*
** FragTrap damage methods
*/

void			FragTrap::takeDamage( unsigned int amount )
{
	const unsigned int	fri(7);
	const std::string	funnyReferences[fri] = {
		"Why do I even feel pain?!",
		"Why did they build me out of galvanized flesh?!",
		"Ow hohoho, that hurts! Yipes!",
		"My robotic flesh! AAHH!",
		"Yikes! Ohhoho!",
		"Woah! Oh! Jeez!",
		"If only my chassis... weren't made of recycled human body parts! Wahahaha!"
	};
	const unsigned int	cri(23);
	const std::string	crippleReferences[cri] = {
		"I'll stop talking when I'm dead!",
		"I'll die the way I lived: annoying!",
		"Come back here! I'll gnaw your legs off!",
		"This could've gone better!",
		"You look like something a skag barfed up!",
		"What's that smell? Oh wait, it's just you!",
		"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
		"You're one screw short of a screw!",
		"I bet your mom could do better!",
		"You look like something a skag barfed up!",
		"Oh yeah? Well, uh... yeah.",
		"What is that smell? Oh, never mind... it's just you!",
		"I'm leaking!",
		"Good thing I don't have a soul!",
		"Aww!",
		"Aww! Come on!",
		"You can't kill me!",
		"I'm too pretty to die!",
		"Crap!",
		"Robot down!",
		"No, nononono NO!",
		"I'll never go back to the bad place!",
		"I have many regrets!"
	};
	const unsigned int	finalDamegeAmount = amount - this->Armor_damage_reduction;

	std::cout << "FR4G-TP " << this->Name;
	if ( finalDamegeAmount >= this->Hit_points ) {
		this->Hit_points = 0;
		std::cout << " becomes dead, when tooks " << finalDamegeAmount;
		std::cout << ( (finalDamegeAmount < 2) ? " point of damage ! " : " points of damage ! " );
		std::cout << crippleReferences[getRandomNumber(cri)] << std::endl;
	}
	else {
		this->Hit_points -= finalDamegeAmount;
		std::cout << " repairs " << finalDamegeAmount;
		std::cout << ( (finalDamegeAmount < 2) ? " point of damage ! " : " points of damage ! " );
		std::cout << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
}

void			FragTrap::beRepaired( unsigned int amount )
{
	const unsigned int		fri(5);
	const std::string	funnyReferences[fri] = {
		"Health! Eww, what flavor is red?",
		"Health over here!",
		"Sweet life juice!",
		"I found health!",
		"Healsies!"
	};
	const unsigned int	finalRepairAmount = ( amount + this->Hit_points );

	std::cout << "FR4G-TP " << this->Name;
	if ( finalRepairAmount >= this->Max_hit_points ) {
		this->Hit_points = this->Max_hit_points;
		std::cout << " repairs full health, that contains " << this->Max_hit_points;
		std::cout << " hit poins ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
	else {
		this->Hit_points += finalRepairAmount;
		std::cout << " repairs " << finalRepairAmount;
		std::cout << ( (finalRepairAmount < 2) ? " hit point ! " : " hit poins ! " ) << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
}

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
		std::cout << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
	else {
		std::cout << "I can't launch VaultHunter.EXE coz i'm out of energy points(" << std::endl;
	}
}

/*
** Getters
*/

std::string		FragTrap::getName( void ) const
{
	return (this->Name);
}

unsigned int	FragTrap::getMeleeAttackDamage( void ) const
{
	return (this->Melee_attack_damage);
}

unsigned int	FragTrap::getRangedAttackDamage( void ) const
{
	return (this->Ranged_attack_damage);
}

unsigned int	FragTrap::getArmourDamageReduction( void ) const
{
	return (this->Armor_damage_reduction);
}

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

unsigned int	FragTrap::getHitPoints( void ) const
{
	return (this->Hit_points);
}

unsigned int	FragTrap::getEnergyPoints( void ) const
{
	return (this->Energy_points);
}
