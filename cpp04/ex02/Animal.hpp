#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal{
protected:
	std::string type;
	Brain* brain;
public:
	Animal(std::string type = "") : type(type) {}
	virtual void makeSound() const {
		std::cout << "* Animal noises *\n";
	}
	virtual ~Animal() {
		std::cout << "Animal died\n";
	}
	virtual void addIdea(std::string idea) = 0;
	virtual std::string getIdea(int i) const = 0;
	virtual void setIdea(int i, std::string idea) = 0;
	std::string getType() const { return this->type;}
};

#endif