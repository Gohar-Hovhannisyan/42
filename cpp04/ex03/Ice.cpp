#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	this->_xp = other.getXP();
}

const Ice& Ice::operator=(const Ice& other)
{
	this->type = "ice";
	this->_xp = other.getXP();
	return *this;
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice* Ice::clone() const
{
	Ice* cpy = new Ice(*this);
	return cpy;
}