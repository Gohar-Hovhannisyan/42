#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <stdlib.h>

std::string rand_str(void)
{
	std::string s;
	static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 10; ++i)
	{
		s+= alpha[rand() % (sizeof(alpha) - 1)];
	}
    return s;
}

int main()
{
	ZombieEvent z("BrainLover");
	Zombie *newz = z.newZombie("Hazza");
	newz->announce();
	z.randomChump();
	delete newz;
	return (0);
}