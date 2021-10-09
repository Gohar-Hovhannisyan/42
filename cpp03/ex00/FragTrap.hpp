#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <random>

class FragTrap{
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
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap& other);
	const FragTrap& operator=(const FragTrap& other);
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif