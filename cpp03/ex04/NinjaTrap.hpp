#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	NinjaTrap(const NinjaTrap& other);
	void ninjaShoebox(NinjaTrap& other);
	void ninjaShoebox(ScavTrap& other);
	void ninjaShoebox(FragTrap& other);
};

#endif