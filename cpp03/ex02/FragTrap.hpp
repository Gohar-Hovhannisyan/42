#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <random>

class FragTrap : public ClapTrap{
public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap& other);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif