#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "Name: " << this->name << "\ttype: " << this->type << ". I loooove brainzzzzzz\n";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}