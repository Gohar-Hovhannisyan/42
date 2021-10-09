#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	hit = 100;
	max_hit = 100;
	energy = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	range = 20;
	armor = 5;
	std::cout << "NinjaTrap made\n";
}

NinjaTrap::NinjaTrap(std::string name)
{
	hit = 100;
	max_hit = 100;
	energy = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	range = 20;
	armor = 5;
	this->name = name;
	std::cout << "NinjaTrap made\n";
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap dead\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
{
	hit = other.hit;
	max_hit = other.max_hit;
	energy = other.energy;
	max_energy = other.max_energy;
	level = other.level;
	melee = other.melee;
	range = other.range;
	armor = other.armor;
	this->name = other.name;
	std::cout << "NinjaTrap copied\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap& other)
{
	std::cout << "Argument is NinjaTrap and I'm tired of copying and pasting\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap& other)
{
	std::cout << "Argument is ScavTrap and I'm tired of copying and pasting\n";
}

void NinjaTrap::ninjaShoebox(FragTrap& other)
{
	std::cout << "Argument is FragTrap and I'm tired of copying and pasting\n";
}