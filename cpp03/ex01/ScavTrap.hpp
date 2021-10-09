#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap{
private:
	int hit;
	int max_hit;
	int energy;
	int max_energy;
	int level;
	std::string name;
	int melee;
	int range;
	int armor;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap& other);
	const ScavTrap& operator=(const ScavTrap& other);
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
};

#endif