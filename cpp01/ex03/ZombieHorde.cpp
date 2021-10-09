#include "ZombieHorde.hpp"

std::string rand_str(void);

ZombieHorde::ZombieHorde(int N)
{
	this->zombies = new Zombie[N];
	this->size = N;
	for(int i = 0; i < N; i++)
		zombies[i].set_name(rand_str());
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

void ZombieHorde::announce()
{
	for(int i = 0; i < size; i++)
		zombies[i].announce();
}