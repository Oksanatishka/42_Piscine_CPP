#ifndef FIXED_hpp
#define FIXED_hpp

#include <iostream>
#include <cmath>	// for roundf f-n

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & toCopy );
	Fixed( const int raw );
	Fixed( const float raw );
	~Fixed( void );

	Fixed &			operator=( Fixed const & toCopy );

	int			getRawBits( void ) const;
	void			setRawBits( const int raw );
	float			toFloat( void ) const;		// converts the fixed point value to a floating point value.
	int			toInt( void ) const;	// converts the fixed point value to an integer value.

private:
	int			_val;
	static const int	_fractionalBits = 8;

};

// An overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream.
std::ostream &		operator<<( std::ostream & o, const Fixed & fixed );

#endif
