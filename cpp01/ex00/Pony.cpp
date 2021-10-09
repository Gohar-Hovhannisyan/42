#include "Pony.hpp"

Pony::Pony(std::string color, int level)
{
	this->color = color;
	this->cute_level = level;
}

void Pony::do_stuff()
{
	std::cout << "Hello every one. I'm a " << this->color << " pony and on the cuteness scale I scored a " << this->cute_level << "/10.\n";
	std::cout << "M'kay bye\n";
}

void Pony::set_color(std::string color)
{
	this->color = color;
}

void Pony::set_cute(int level)
{
	this->cute_level = level;
}

std::string Pony::get_color(void)
{
	return (this->color);
}

int Pony::get_cute(void)
{
	return(this->cute_level);
}