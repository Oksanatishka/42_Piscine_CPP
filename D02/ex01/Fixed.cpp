#include "Fixed.hpp"

Fixed::Fixed( void ) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed & toCopy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::Fixed( const int raw )
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = (raw << Fixed::_fractionalBits);
}


Fixed::Fixed( const float raw )
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (int)roundf(raw * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}



Fixed &			Fixed::operator=( const Fixed & toCopy )
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->_val = toCopy.getRawBits();

	return *this;
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
	return ((float)this->_val / (1 << Fixed::_fractionalBits));
}

int				Fixed::toInt( void ) const
{
	return (this->_val >> Fixed::_fractionalBits);
}

std::ostream &	operator<<( std::ostream & o, const Fixed & fixed )
{
	o << fixed.toFloat();
	return o;
}
