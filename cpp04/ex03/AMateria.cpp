#include "AMateria.hpp"

AMateria::AMateria() : type(""), _xp(0) {}

AMateria::AMateria(std::string const & type) : type(type), _xp(0) {}

AMateria::AMateria(const AMateria& other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
}

const AMateria& AMateria::operator=(const AMateria& other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
	return *this;
}

void AMateria::use(ICharacter& target)
{
	_xp += 10;
}