#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	hit = 100;
	max_hit = 100;
	energy = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	range = 20;
	armor = 5;
	std::cout << "Constructor is called\n";
}

FragTrap::FragTrap(std::string name)
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
	std::cout << "Constructor is called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor is called\n";
}

FragTrap::FragTrap(const FragTrap& other)
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
	std::cout << "Copy constructor is called\n";
}

const FragTrap& FragTrap::operator=(const FragTrap& other)
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

void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << name << " attacks " << target << " at range causing " << range << " points of damage\n";
}

void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << name << " attacks " << target << " at melee causing " << melee << " points of damage\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (hit - (armor + amount) > 0)
		hit = hit - (armor + amount);
	else
		hit = 0;
	std::cout << name << " takes damage " << amount << " amount\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hit + amount < max_hit)
		hit += amount;
	else
		hit = max_hit;
	std::cout << name << " repairs " << amount << " amount\n";	
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	std::string attacks[6] = {"Torgue Fiesta", "Pirate Ship Mode", "Clap-in-the-Box", "Gun Wizard", "One-Shot Wonder", "Laser Inferno"};
	if (energy < 25)
		std::cout << "Don't have enough energy\n";
	else
	{
		std::cout << name << " attacks with " << attacks[rand() % 6] << std::endl;
		energy -= 25;
	}
}
