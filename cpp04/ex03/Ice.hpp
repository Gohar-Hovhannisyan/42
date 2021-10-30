#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(const Ice& other);
	const Ice& operator=(const Ice& other);
	~Ice() {}
	std::string const & getType() const {return this->type;}
	unsigned int getXP() const {return this->_xp;}
	Ice* clone() const;
	void use(ICharacter& target);	
};

#endif