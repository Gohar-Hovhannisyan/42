#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	this->fxd = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	this->fxd = other.getRawBits();
	std::cout << "Copy constructor called\n";
}

const Fixed& Fixed::operator=(const Fixed& f)
{
	this->fxd = f.getRawBits();
	std::cout << "Assignation operator called\n";
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fxd);
}

void Fixed::setRawBits(int const raw)
{
	this->fxd = raw;
}
