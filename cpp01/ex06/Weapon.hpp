#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
private:
	std::string type;
public:
	Weapon(std::string="");
	std::string getType() const {return (type);}
	void setType(std::string type) {this->type = type;}
};

#endif