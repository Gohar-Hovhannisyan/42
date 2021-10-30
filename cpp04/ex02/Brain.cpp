#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	size = 0;
}

Brain::~Brain()
{
	delete[] ideas;
}

void Brain::add_idea(std::string idea)
{
	ideas[size] = idea;
	size++;
}