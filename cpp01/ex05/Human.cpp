#include "Human.hpp"

std::string Human::identify(void) const
{
	return (brain.identify());
}

const Brain &Human::getBrain(void) const
{
	return (this->brain);
}

Human::Human() {}