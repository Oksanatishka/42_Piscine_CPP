#ifndef FIXED_hpp
#define FIXED_hpp

#include <iostream>

// a canonical class to represent fixed point numbers :
// Например, fixed <8,3> обозначает 8-битное число с фиксированной точкой, из которых 3 самых правых бита являются дробными. 
// 00010.110 (в двоичной с-ме) = 0 + 0 + 0 + 1 * 2(1) + 0 + 1 * 2(-1) + 1 * 2(-2) + 0 = 2.75
class Fixed
{
// Public members :
  public:
	// 1. A default constructor that initializes the fixed point value to 0.
	Fixed(void);
	// 3. A copy constructor.
	Fixed(Fixed const &toCopy);
	// 2. A destructor.
	~Fixed(void);

	// 4. An assignation operator overload.
	Fixed &operator=(Fixed const &toCopy);

	// 5. A member function int getRawBits( void ) const; that returns the raw value of the fixed point value.
	int getRawBits(void) const;
	// 6. A member function void setRawBits( int const raw ); that sets the raw value of the fixed point value.
	void setRawBits(int const raw);

// Private members :
  private:
	// 7. An integer to store the fixed point value.
	int _rawBits;
	// 8. A static constant integer to store the number of fractional bits. This con- stant will always be the litteral 8.
	static const int _fractionalBits = 8;
};

#endif
