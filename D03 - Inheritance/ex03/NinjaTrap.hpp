#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap( void );
	NinjaTrap( std::string );
	NinjaTrap( const NinjaTrap & );
	~NinjaTrap( void );

	NinjaTrap		&operator=( const NinjaTrap & );

	// challengeNewcomer method
	void	ninjaShoebox( const ClapTrap & );
	void	ninjaShoebox( const FragTrap & );
	void	ninjaShoebox( const ScavTrap & );
	void	ninjaShoebox( const NinjaTrap & );
};

#endif
