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

int Fixed::getBit(void) const
{
	return (this->bit);
}

void Fixed::setRawBits(int const raw)
{
	this->fxd = raw;
}

Fixed::Fixed(const int f)
{
	this->fxd = (f << this->bit);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f)
{
	this->fxd = roundf(f * (1 << this->bit));
	std::cout << "Float constructor called\n";
}

float Fixed::toFloat(void) const
{
	return ((float)this->fxd / (float)(1 << this->bit));
}

int Fixed::toInt(void) const
{
	return (this->fxd >> this->bit);
}

std::ostream& operator<< (std::ostream& stream, const Fixed& f)
{
	stream << f.toFloat();
	return stream;
}