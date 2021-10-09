#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

std::string rand_str(void);

class ZombieEvent{
private:
	std::string type;
public:
	ZombieEvent(std::string type){this->type = type;}
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump(void);
	std::string get_type(void){return (this->type);}
};

#endif