#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal(std::string type = "") : type(type) {}
	virtual void makeSound() const {
		std::cout << "* Animal noises *\n";
	}
	virtual ~Animal() {
		std::cout << "Animal died\n";
	}
	std::string getType() const { return this->type;}
};

#endif