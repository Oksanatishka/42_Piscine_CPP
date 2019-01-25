#include "NinjaTrap.hpp"

/*****************************************************************************/
/************************* Constructors and Destructors **********************/
/*****************************************************************************/

NinjaTrap::NinjaTrap( void ) : ClapTrap()
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap( name, 60, 60, 120, 120, 1, 60, 5, 0 )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

NinjaTrap::NinjaTrap( const NinjaTrap &toCopy )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!" << std::endl;
	*this = toCopy;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "[" << this->Name << "] ";
	std::cout << "Have a lovely afternoon, and thank you for using Hyperion Robot Services. Let me know if you have any other portal-rific needs!" << std::endl;
}


/*****************************************************************************/
/*************************** Overloaded Operators ****************************/
/*****************************************************************************/

NinjaTrap			&NinjaTrap::operator=( const NinjaTrap &toEquate )
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
** ninjaShoebox method
*/

void			NinjaTrap::ninjaShoebox( const ClapTrap &obj )
{
	if ( this->Energy_points >= 25 ) {
		this->Energy_points -= 25;
		std::cout << "[" << this->Name << "] Psst... I see you CL4P-TP " << obj.getName() << "." << std::endl;
		std::cout << "[" << this->Name << "] You're probably wondering where I am, don't worry. Instead, let me tell you a joke." << obj.getName() << std::endl;
		std::cout << "[" << this->Name << "] How many skags would Brick eat if Brick could eat skags?" << std::endl;
		std::cout << "[" << this->Name << "] All of them! Hahaha, Ninja's have great humor right?" << std::endl << std::endl;
	}
	else {
		std::cout << "[" << this->Name << "] ";
		std::cout << "I can't launch challengeNewcomer coz i'm out of energy points(" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox( const FragTrap &obj )
{
	if ( this->Energy_points >= 25 ) {
		this->Energy_points -= 25;
		std::cout << "[" << this->Name << "] Psst... I see you FR4G-TP " << obj.getName() << "." << std::endl;
		std::cout << "[" << this->Name << "] You're probably wondering where I am, don't worry. Instead, let me tell you a joke." << obj.getName() << std::endl;
		std::cout << "[" << this->Name << "] How can you tell when Roland likes a bandit?" << std::endl;
		std::cout << "[" << this->Name << "] He shoots them in the head." << std::endl;
		std::cout << "[" << this->Name << "] How can you tell when Roland hates a bandit?" << std::endl;
		std::cout << "[" << this->Name << "] He shoots them in the head. Hahaha I know I'm so funny!" << std::endl << std::endl;
	}
	else {
		std::cout << "[" << this->Name << "] ";
		std::cout << "I can't launch challengeNewcomer coz i'm out of energy points(" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox( const ScavTrap &obj )
{
	if ( this->Energy_points >= 25 ) {
		this->Energy_points -= 25;
		std::cout << "[" << this->Name << "] Psst... I see you SC4V-TP " << obj.getName() << "." << std::endl;
		std::cout << "[" << this->Name << "] You're probably wondering where I am, don't worry. Instead, let me tell you a joke." << obj.getName() << std::endl;
		std::cout << "[" << this->Name << "] What never shuts up but is impossible to find?" << std::endl <<
		std::cout << "[" << this->Name << "] ClapTraps! And guess what? NinjaTraps are harder to find!" << std::endl << std::endl;
	}
	else {
		std::cout << "[" << this->Name << "] ";
		std::cout << "I can't launch challengeNewcomer coz i'm out of energy points(" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox( const NinjaTrap &obj )
{
	if ( this->Energy_points >= 25 ) {
		this->Energy_points -= 25;
		std::cout << "[" << this->Name << "] Psst... I see you NNJ4-TP " << obj.getName() << "." << std::endl;
		std::cout << "[" << this->Name << "] You're probably wondering where I am, don't worry. Instead, let me tell you a joke." << obj.getName() << std::endl;
		std::cout << "[" << this->Name << "] What is the last thing to go through bandits' mind when they meet Brick?" << std::endl;
		std::cout << "[" << this->Name << "] Brick's Fist. HAHAHAH I crack myself up." << std::endl << std::endl;
	}
	else {
		std::cout << "[" << this->Name << "] ";
		std::cout << "I can't launch challengeNewcomer coz i'm out of energy points(" << std::endl;
	}
}
