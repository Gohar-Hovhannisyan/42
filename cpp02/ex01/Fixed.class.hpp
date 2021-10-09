#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int fxd;
	static const int bit = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const int f);
	Fixed(const float f);
	Fixed(const Fixed& other);
	const Fixed& operator=(const Fixed& f);
	int getRawBits(void) const;
	int getBit(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const; 
};

std::ostream& operator<< (std::ostream& stream, const Fixed& f);

#endif