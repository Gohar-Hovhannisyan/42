#include <iostream>
#include "HumanA.hpp"

void HumanA::attack(void) const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}