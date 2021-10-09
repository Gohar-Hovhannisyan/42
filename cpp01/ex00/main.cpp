#include "Pony.hpp"

void ponyOnTheHeap(std::string color, int cuteness)
{
	Pony* pony = new Pony(color, cuteness);
	pony->do_stuff();
	delete pony;
}

void ponyOnTheStack(std::string color, int cuteness)
{
	Pony pony(color, cuteness);
	pony.do_stuff();
}

int main()
{
	ponyOnTheHeap("pink", 10);
	ponyOnTheStack("blue", 10);
	return (0);
}