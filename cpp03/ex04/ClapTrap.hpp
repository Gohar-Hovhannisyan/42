#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
protected:
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
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& other);
	const ClapTrap& operator=(const ClapTrap& other);
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif