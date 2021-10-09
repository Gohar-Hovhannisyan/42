#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int fxd;
	static const int bit = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& other);
	const Fixed& operator=(const Fixed& f);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif