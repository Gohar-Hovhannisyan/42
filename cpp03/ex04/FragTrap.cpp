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
	std::cout << "FragTrap is created\n";
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
	std::cout << "FragTrap is created\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap is dead\n";
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
	std::cout << "FragTrap is copied\n";
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
