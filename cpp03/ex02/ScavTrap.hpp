#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap& other);
	void challengeNewcomer(void);
};

#endif