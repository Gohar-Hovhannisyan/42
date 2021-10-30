#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter{
private:
	std::string name;
	AMateria** inv;
	int size;
public:	
	Character();
	Character(std::string name);
	Character(const Character& other);
	const Character& operator=(const Character& other);
	~Character();
	std::string const& getName() const {return this->name;}
	int getSize() const {return this->size;}
	AMateria* getMatIdx(int i) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif