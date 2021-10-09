#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	~SuperTrap(void);
	SuperTrap(const SuperTrap& other);
};

#endif