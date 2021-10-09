#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
private:
	Weapon* weapon;
	std::string name;
public:
	void attack(void) const;
	HumanB(std::string name);
	void setWeapon(Weapon& weapon) {this->weapon = &weapon;}
};

#endif