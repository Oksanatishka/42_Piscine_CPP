#include "ScavTrap.hpp"

/*****************************************************************************/
/************************* Constructors and Destructors **********************/
/*****************************************************************************/

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 100, 100, 100, 1, 20, 15, 3 )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &toCopy )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Have a lovely afternoon, and thank you for using Hyperion Robot Services. Let me know if you have any other portal-rific needs!" << std::endl;
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
/****************************** Public Methods *******************************/
/*****************************************************************************/

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
		std::cout << "[" << this->Name << "] ";
		std::cout << "Offer a challenge for newcomer<" << target << ">: " << s[getRandomNumber(fti)] << std::endl;
	}
	else {
		std::cout << "[" << this->Name << "] ";
		std::cout << "I can't launch challengeNewcomer coz i'm out of energy points(" << std::endl;
	}
}
