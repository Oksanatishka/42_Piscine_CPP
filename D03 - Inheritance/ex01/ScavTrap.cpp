#include "ScavTrap.hpp"

/*****************************************************************************/
/************************* Constructors and Destructors **********************/
/*****************************************************************************/

ScavTrap::ScavTrap( void ) :
	Name("FR3G-TP"),
	Hit_points(100),
	Max_hit_points(100),
	Energy_points(100),
	Max_energy_points(100),
	Level(1),
	Melee_attack_damage(20),
	Ranged_attack_damage(15),
	Armor_damage_reduction(3)
{
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) :
	Name(name),
	Hit_points(100),
	Max_hit_points(100),
	Energy_points(100),
	Max_energy_points(100),
	Level(1),
	Melee_attack_damage(20),
	Ranged_attack_damage(15),
	Armor_damage_reduction(3)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &toCopy )
{
	std::cout << "I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Have a lovely afternoon, and thank you for using Hyperion Robot Services. Let me know if you have any other portal-rific needs!" << std::endl;
	return ;
}


/*****************************************************************************/
/*************************** Overloaded Operators ****************************/
/*****************************************************************************/

ScavTrap			&ScavTrap::operator=( const ScavTrap &toEquate )
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
** Methods for getting random values
*/

int					ScavTrap::getRandomNumber( const unsigned int amount ) const
{
	srand(clock());
	const int		i = ( rand() % amount );

	return ( (i > 0) ? i : 0 );
}

/*****************************************************************************/
/****************************** Public Methods *******************************/
/*****************************************************************************/

/*
** ScavTrap attacks
*/

void			ScavTrap::rangedAttack( const std::string &target ) const
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

	std::cout << "FR3G-TP " << this->Name << " attacks " << target << " at range, causing ";
	std::cout << this->Ranged_attack_damage << " points of damage ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
}

void			ScavTrap::meleeAttack( const std::string &target ) const
{
	const unsigned int	fri(4);
	const std::string	funnyReferences[fri] = {
		"Hyah!",
		"Heyyah!",
		"Take that!",
		"Bop!"
	};

	std::cout << "FR3G-TP " << this->Name << " attacks " << target << " at melee, causing ";
	std::cout << this->Melee_attack_damage << " points of damage ! " << funnyReferences[getRandomNumber(fri)] << std::endl;
}

/*
** ScavTrap damage methods
*/

void			ScavTrap::takeDamage( unsigned int amount )
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

	std::cout << "FR3G-TP " << this->Name;
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

void			ScavTrap::beRepaired( unsigned int amount )
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

	std::cout << "FR3G-TP " << this->Name;
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
** challengeNewcomer method
*/

void			ScavTrap::challengeNewcomer( const std::string &target )
{
	const unsigned int		fti(5);
	const std::string		s[fti] = {
		"Russian roulette! What's the worst that can happen to the newcomer? More specifically, what's the worse that could happen to ScavTrap since it's made of, you know... junk?",
		"Doing wheelies on a meat bicycle! Perfectly kosher, and to a certain degree a bit delicious if you think about it.",
		"DANCE PARTY! Get your groove on and let's see who can twerk and shake those hips the best!",
		"Friendly duel, don't worry because you're a newcomer you are guaranteed to lose, watch my karate moves! Hyah!",
		"Non stop loot box addiction! Let's see who can open the most loot box before our wallets are empty!"
	};

	if ( this->Energy_points >= 25 ) {
		this->Energy_points -= 25;
		std::cout << "[" << this->Name << "] offer a challenge for newcomer<" << target << ">: " << s[getRandomNumber(fti)] << std::endl;
	}
	else {
		std::cout << "I can't launch challengeNewcomer coz i'm out of energy points(" << std::endl;
	}
}

/*
** Getters
*/

std::string		ScavTrap::getName( void ) const
{
	return (this->Name);
}

unsigned int	ScavTrap::getMeleeAttackDamage( void ) const
{
	return (this->Melee_attack_damage);
}

unsigned int	ScavTrap::getRangedAttackDamage( void ) const
{
	return (this->Ranged_attack_damage);
}

unsigned int	ScavTrap::getArmourDamageReduction( void ) const
{
	return (this->Armor_damage_reduction);
}

unsigned int	ScavTrap::getHitPoints( void ) const
{
	return (this->Hit_points);
}

unsigned int	ScavTrap::getEnergyPoints( void ) const
{
	return (this->Energy_points);
}
