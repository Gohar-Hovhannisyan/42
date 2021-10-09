#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony{
private:
	std::string color;
	int cute_level;
public:
	Pony(std::string color, int level);
	void do_stuff();
	void set_color(std::string color);
	void set_cute(int level);
	std::string get_color(void);
	int get_cute(void);
};

#endif