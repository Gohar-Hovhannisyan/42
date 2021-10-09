#include "Brain.hpp"

#include <sstream>

std::string Brain::identify(void) const
{
	std::stringstream ss;
	std::string pointer;
	ss << this;
	pointer = ss.str();
	for (int i = 2; i < pointer.length(); i++)
	{
		if (pointer[i] >= 'a' && pointer[i] <= 'z')
			pointer[i] -= 'a' - 'A';
	}
	return (pointer);
}