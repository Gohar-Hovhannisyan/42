#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	hit = 100;
	max_hit = 100;
	energy = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	range = 20;
	armor = 5;
	std::cout << "ScavTrap made\n";
}

ScavTrap::ScavTrap(std::string name)
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
	std::cout << "ScavTrap made\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap dead\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
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
	std::cout << "ScavTrap copied\n";
}

void ScavTrap::challengeNewcomer(void)
{
	std::string challanges[8] = {
		"Ascension Bluff",
		"The Droughts",
		"Holy Broadcast Centre",
		"Meridian Outskirts",
		"Meridian Metroplex",
		"Windward Plaza",
		"Anchorhold",
		"Dead Claptrap"
	};
	std::cout << name << "'s challange is " << challanges[rand() % 8] << std::endl;
}
