#include "Fixed.hpp"

Fixed::Fixed( void ) : _val(0)
{
	return ;
}

Fixed::Fixed( const Fixed &toCopy )
{
	*this = toCopy;
}

Fixed::Fixed( const int raw )
{
	this->_val = (raw << Fixed::_fractionalBits);
}


Fixed::Fixed( const float raw )
{
	this->_val = (int)roundf(raw * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed( void )
{
	return ;
}



Fixed			&Fixed::operator=( const Fixed & toEquate )
{
	this->_val = toEquate.getRawBits();
	return *this;
}

Fixed			Fixed::operator+( const Fixed &toAdd ) const
{
	return Fixed( (this->toFloat() + toAdd.toFloat()) );
}

Fixed			Fixed::operator-( const Fixed &toSubtract ) const
{
	return Fixed( (this->toFloat() - toSubtract.toFloat()) );
}

Fixed			Fixed::operator*( const Fixed &toMultiply ) const
{
	return Fixed( (this->toFloat() * toMultiply.toFloat()) );
}

Fixed			Fixed::operator/( const Fixed &toDivide ) const
{
	return Fixed( (this->toFloat() / toDivide.toFloat()) );
}


Fixed			&Fixed::operator++( void )
{
	++this->_val;
	return *this;
}

Fixed			Fixed::operator++( int )
{
	Fixed	f(*this);
	this->_val++;
	return f;
}

Fixed			&Fixed::operator--( void )
{
	--this->_val;
	return *this;
}

Fixed			Fixed::operator--( int )
{
	Fixed	f(*this);
	this->_val--;
	return f;
}


bool			Fixed::operator>( const Fixed &toCompare ) const
{
	return ( (this->_val > toCompare.getRawBits()) ? true : false );
}

bool			Fixed::operator<( const Fixed &toCompare ) const
{
	return ( (this->_val < toCompare.getRawBits()) ? true : false );
}

bool			Fixed::operator>=( const Fixed &toCompare ) const
{
	return ( (this->_val >= toCompare.getRawBits()) ? true : false );
}

bool			Fixed::operator<=( const Fixed &toCompare ) const
{
	return ( (this->_val <= toCompare.getRawBits()) ? true : false );
}

bool			Fixed::operator==( const Fixed &toCompare ) const
{
	return ( (this->_val == toCompare.getRawBits()) ? true : false );
}

bool			Fixed::operator!=( const Fixed &toCompare ) const
{
	return ( (this->_val != toCompare.getRawBits()) ? true : false );
}



int				Fixed::getRawBits( void ) const
{
	return this->_val;
}

void			Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}

float			Fixed::toFloat( void ) const
{
	return ( (float)this->_val / (1 << Fixed::_fractionalBits) );
}

int				Fixed::toInt( void ) const
{
	return (this->_val >> Fixed::_fractionalBits);
}



std::ostream	&operator<<( std::ostream & o, const Fixed & fixed )
{
	o << fixed.toFloat();
	return o;
}

const Fixed		&Fixed::min( const Fixed &f1, const Fixed &f2 )
{
	return ( (f1 < f2) ? f1 : f2 );
}

const Fixed		&Fixed::max( const Fixed &f1, const Fixed &f2 )
{
	return ( (f1 > f2) ? f1 : f2 );
}
