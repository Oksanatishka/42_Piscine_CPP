// Coplien’s form is composed of:
// Constructor
// Destructor
// Copy constructor
// & Operation overload =

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class FragTrap {

private:
	// Player attributes
	std::string		Name;
	unsigned int	Hit_points;
	unsigned int	Max_hit_points;
	unsigned int	Energy_points;
	unsigned int	Max_energy_points;
	unsigned int	Level;

	unsigned int	Melee_attack_damage;
	unsigned int	Ranged_attack_damage;
	unsigned int	Armor_damage_reduction;

	unsigned int	VaulthunterDotExe_attack_damage;
	unsigned int	Meme_attack_damage;
	unsigned int	Fart_attack_damage;
	unsigned int	Weed_attack_damage;
	unsigned int	Trololo_attack_damage;
	unsigned int	Laser_attack_damage;

	// Random methods
	int				getRandomNumber( const unsigned int  ) const;

	// VaultHunter.EXE attacks
	unsigned int	memeAttack( const std::string &target ) const;
	unsigned int	fartAttack( const std::string &target ) const;
	unsigned int	weedAttack( const std::string &target ) const;
	unsigned int	trololoAttack( const std::string &target ) const;
	unsigned int	laserAttack( const std::string &target ) const;

public:
	FragTrap( void );
	FragTrap( std::string );
	FragTrap( const FragTrap & );
	~FragTrap( void );

	FragTrap		&operator=( const FragTrap & );

	// FragTrap attacks
	void			rangedAttack( const std::string &target ) const;
	void			meleeAttack( const std::string &target ) const;
	// FragTrap damage methods
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	// VaultHunter.EXE method
	void			vaulthunter_dot_exe( const std::string &target );

	// Getters
	std::string		getName( void ) const;
	unsigned int	getMeleeAttackDamage( void ) const;
	unsigned int	getRangedAttackDamage( void ) const;
	unsigned int	getArmourDamageReduction( void ) const;
	unsigned int	getVaulHunter_dot_exeDamage( void ) const;
	unsigned int	getMemeAttackDamage( void ) const;
	unsigned int	getFartAttackDamage( void ) const;
	unsigned int	getWeedAttackDamage( void ) const;
	unsigned int	getTrololoAttackDamage( void ) const;
	unsigned int	getLaserAttackDamage( void ) const;
	unsigned int	getHitPoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;

};

#endif
