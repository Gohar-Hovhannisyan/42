#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(const Cure& other);
	const Cure& operator=(const Cure& other);
	~Cure() {}
	std::string const & getType() const {return this->type;}
	unsigned int getXP() const {return this->_xp;}
	Cure* clone() const;
	void use(ICharacter& target);	
};

#endif