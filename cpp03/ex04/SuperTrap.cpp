#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	hit = 100;
	max_hit = 100;
	energy = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	range = 20;
	armor = 5;
	std::cout << "SuperTrap created\n";
}

SuperTrap::SuperTrap(std::string name)
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
	std::cout << "SuperTrap created\n";
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap dead\n";
}

SuperTrap::SuperTrap(const SuperTrap& other)
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
	std::cout << "SuperTrap copied\n";
}