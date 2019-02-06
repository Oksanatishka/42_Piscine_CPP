#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( const Fixed &toCopy );
	Fixed( const int raw );
	Fixed( const float raw );
	~Fixed( void );

	Fixed			&operator=( const Fixed &toEquate );
	// operator overloads (Four arithmetic operators)
	Fixed			operator+( const Fixed &toAdd ) const;
	Fixed			operator-( const Fixed &toSubtract ) const;
	Fixed			operator*( const Fixed &toMultiply ) const;
	Fixed			operator/( const Fixed &toDivide ) const;
	
	// operator overloads (The pre-increment, post-increment, pre-decrement and post-decrement operators)
	Fixed			&operator++( void );
	Fixed			operator++( int );
	Fixed			&operator--( void );
	Fixed			operator--( int);

	// operator overloads (Six comparison operators)
	bool			operator>( const Fixed &toCompare ) const;
	bool			operator<( const Fixed &toCompare ) const;
	bool			operator>=( const Fixed &toCompare ) const;
	bool			operator<=( const Fixed &toCompare ) const;
	bool			operator==( const Fixed &toCompare ) const;
	bool			operator!=( const Fixed &toCompare ) const;

	int				getRawBits( void ) const;
	void			setRawBits( const int raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;
	
	// The non-member function min(max) that takes references on two fixed point values and 
	// returns a reference to the smallest (biggest) value, and an overload that takes references on two constant fixed point values 
	// and returns a reference to the smallest (biggest) constant value.
	static const Fixed	&min( const Fixed &f1, const Fixed &f2 );
	static const Fixed	&max( const Fixed &f1, const Fixed &f2 );

private:
	int					_val;
	static const int	_fractionalBits = 8;

};

std::ostream		&operator<<( std::ostream & o, const Fixed & fixed );

#endif
