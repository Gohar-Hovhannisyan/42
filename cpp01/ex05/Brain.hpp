#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain{
private:
	int delicious;
public:
	Brain(int delicious = 0) : delicious(delicious) {}
	std::string identify(void) const;
	int get_del(void) const {return (delicious);}
};

#endif