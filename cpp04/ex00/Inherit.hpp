#ifndef INHERIT_HPP
#define INHERIT_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	~Dog() {
		std::cout << "Dog died\n";
	}
	Dog(const Dog& other);
	void makeSound() const;
};

class Cat : public Animal{
public:
	Cat();
	~Cat() {
		std::cout << "Cat died\n";
	}
	Cat(const Cat& other);
	void makeSound() const;
};

#endif