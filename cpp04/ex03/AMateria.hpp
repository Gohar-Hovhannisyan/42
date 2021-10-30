#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria{
protected:
	std::string type;
	unsigned int _xp;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	const AMateria& operator=(const AMateria& other);
	virtual ~AMateria() {}
	std::string const & getType() const {return this->type;}
	unsigned int getXP() const {return this->_xp;}
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif