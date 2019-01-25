#include "ClapTrap.hpp"

/*****************************************************************************/
/************************* Constructors and Destructors **********************/
/*****************************************************************************/

ClapTrap::ClapTrap(	void ) :
	Name("Default"),
	Hit_points(0),
	Max_hit_points(0),
	Energy_points(0),
	Max_energy_points(0),
	Level(0),
	Melee_attack_damage(0),
	Ranged_attack_damage(0),
	Armor_damage_reduction(0)
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

ClapTrap::ClapTrap(	std::string		Name,
					unsigned int	Hit_points,
					unsigned int	Max_hit_points,
					unsigned int	Energy_points,
					unsigned int	Max_energy_points,
					unsigned int	Level,
					unsigned int	Melee_attack_damage,
					unsigned int	Ranged_attack_damage,
					unsigned int	Armor_damage_reduction ) :
	Name(Name),
	Hit_points(Hit_points),
	Max_hit_points(Max_hit_points),
	Energy_points(Energy_points),
	Max_energy_points(Max_energy_points),
	Level(Level),
	Melee_attack_damage(Melee_attack_damage),
	Ranged_attack_damage(Ranged_attack_damage),
	Armor_damage_reduction(Armor_damage_reduction)
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Let's get this party started!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &toCopy )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Recompiling my combat code!" << std::endl;
	*this = toCopy;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;
}


/*****************************************************************************/
/*************************** Overloaded Operators ****************************/
/*****************************************************************************/

ClapTrap			&ClapTrap::operator=( const ClapTrap &toEquate )
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
/**************************** Protected Methods ******************************/
/*****************************************************************************/

/*
** Methods for getting random values
*/

int					ClapTrap::getRandomNumber( const unsigned int amount ) const
{
	srand(clock());
	const int		i = ( rand() % amount );

	return ( (i >= 0) ? i : 0 );
}

/*****************************************************************************/
/****************************** Public Methods *******************************/
/*****************************************************************************/

/*
** ClapTrap attacks
*/

void			ClapTrap::rangedAttack( const std::string &target ) const
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

	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target << " at range, causing ";
	std::cout << this->Ranged_attack_damage << " points of damage ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
}

void			ClapTrap::meleeAttack( const std::string &target ) const
{
	const unsigned int	fri(4);
	const std::string	funnyReferences[fri] = {
		"Hyah!",
		"Heyyah!",
		"Take that!",
		"Bop!"
	};

	std::cout << "[" << this->Name << "] ";
	std::cout << "Attacks " << target << " at melee, causing ";
	std::cout << this->Melee_attack_damage << " points of damage ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
}

/*
** ClapTrap damage methods
*/

void			ClapTrap::takeDamage( unsigned int amount )
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

	std::cout << "[" << this->Name << "] ";
	if ( finalDamegeAmount >= this->Hit_points ) {
		this->Hit_points = 0;
		std::cout << "Becomes dead, when tooks " << finalDamegeAmount;
		std::cout << ( (finalDamegeAmount < 2) ? " point of damage ! " : " points of damage ! " );
		std::cout << crippleReferences[getRandomNumber(cri)] << std::endl;
	}
	else {
		this->Hit_points -= finalDamegeAmount;
		std::cout << "Repairs " << finalDamegeAmount;
		std::cout << ( (finalDamegeAmount < 2) ? " point of damage ! " : " points of damage ! " );
		std::cout << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
}

void			ClapTrap::beRepaired( unsigned int amount )
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

	std::cout << "[" << this->Name << "] ";
	if ( finalRepairAmount >= this->Max_hit_points ) {
		this->Hit_points = this->Max_hit_points;
		std::cout << "Repairs full health, that contains " << this->Max_hit_points;
		std::cout << " hit poins ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
	else {
		this->Hit_points += finalRepairAmount;
		std::cout << "Repairs " << finalRepairAmount;
		std::cout << ( (finalRepairAmount < 2) ? " hit point ! " : " hit poins ! " ) << funnyReferences[getRandomNumber(fri)] << std::endl;
	}
}

/*
** Getters
*/

std::string		ClapTrap::getName( void ) const
{
	return (this->Name);
}

unsigned int	ClapTrap::getMeleeAttackDamage( void ) const
{
	return (this->Melee_attack_damage);
}

unsigned int	ClapTrap::getRangedAttackDamage( void ) const
{
	return (this->Ranged_attack_damage);
}

unsigned int	ClapTrap::getArmourDamageReduction( void ) const
{
	return (this->Armor_damage_reduction);
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return (this->Hit_points);
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->Energy_points);
}
