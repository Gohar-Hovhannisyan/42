#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* z = new Zombie(this->type, name);
	return (z);
}

void ZombieEvent::randomChump(void)
{
	Zombie z(this->type, rand_str());
	z.announce();
}