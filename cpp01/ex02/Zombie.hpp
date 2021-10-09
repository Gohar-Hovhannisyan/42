#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
private:
	std::string type;
	std::string name;
public:
	Zombie(std::string type, std::string name);
	Zombie(void);
	void announce(void);
	void set_name(std::string name){this->name = name;}
	void set_type(std::string type){this->type = type;}
	std::string get_name(void){return (name);}
	std::string get_type(void){return (type);}
};

#endif