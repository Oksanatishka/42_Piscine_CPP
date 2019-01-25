#ifndef FIXED_hpp
#define FIXED_hpp

#include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & toCopy );
	~Fixed( void );

	Fixed &			operator=( Fixed const & toCopy );

	int				getRawBits( void ) const;
	void			setRawBits( int const raw );

private:
	int					_rawBits;
	static const int	_fractionalBits = 8;

};

#endif
