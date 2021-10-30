#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
}

const Cure& Cure::operator=(const Cure& other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
	return *this;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure* Cure::clone() const
{
	Cure* cpy = new Cure(*this);
	return cpy;
}