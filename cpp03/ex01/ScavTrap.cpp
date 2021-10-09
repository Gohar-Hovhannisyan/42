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

const ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->hit = other.hit;
	this->max_hit = other.max_hit;
	this->energy = other.energy;
	this->max_energy = other.max_energy;
	this->level = other.level;
	this->melee = other.melee;
	this->range = other.range;
	this->armor = other.armor;
	this->name = other.name;
	return *this;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << name << " attacks " << target << " at range causing " << range << " points of damage\n";
}

void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << name << " attacks " << target << " at melee causing " << melee << " points of damage\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (hit - (armor + amount) > 0)
		hit = hit - (armor + amount);
	else
		hit = 0;
	std::cout << name << " takes damage " << amount << " amount\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hit + amount < max_hit)
		hit += amount;
	else
		hit = max_hit;
	std::cout << name << " repairs " << amount << " amount\n";	
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
