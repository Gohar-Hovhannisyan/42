#include <iostream>
#include "HumanB.hpp"

void HumanB::attack(void) const
{
	std::cout << name << " attacks with his " << (*weapon).getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}