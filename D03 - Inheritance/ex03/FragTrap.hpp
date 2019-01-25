#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

private:
	// Player attributes
	unsigned int	VaulthunterDotExe_attack_damage;
	unsigned int	Meme_attack_damage;
	unsigned int	Fart_attack_damage;
	unsigned int	Weed_attack_damage;
	unsigned int	Trololo_attack_damage;
	unsigned int	Laser_attack_damage;

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

	// VaultHunter.EXE method
	void			vaulthunter_dot_exe( const std::string &target );

	// Getters
	unsigned int	getVaulHunter_dot_exeDamage( void ) const;
	unsigned int	getMemeAttackDamage( void ) const;
	unsigned int	getFartAttackDamage( void ) const;
	unsigned int	getWeedAttackDamage( void ) const;
	unsigned int	getTrololoAttackDamage( void ) const;
	unsigned int	getLaserAttackDamage( void ) const;

};

#endif
