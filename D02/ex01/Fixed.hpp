#ifndef FIXED_hpp
#define FIXED_hpp

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & toCopy );
	Fixed( const int raw );
	Fixed( const float raw );
	~Fixed( void );

	Fixed &			operator=( Fixed const & toCopy );

	int				getRawBits( void ) const;
	void			setRawBits( const int raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;

private:
	int					_val;
	static const int	_fractionalBits = 8;

};

std::ostream &		operator<<( std::ostream & o, const Fixed & fixed );

#endif
