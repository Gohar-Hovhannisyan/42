#ifndef INHERIT_HPP
#define INHERIT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain* brain;
public:
	Dog();
	~Dog() {
		std::cout << "Dog died\n";
		delete brain;
	}
	Dog(const Dog& other);
	void addIdea(std::string idea);
	std::string getIdea(int i) const {return brain->getIdea(i);}
	void setIdea(int i, std::string idea) {brain->setIdea(i, idea);}
	void makeSound() const;
};

class Cat : public Animal{
private:
	Brain* brain;
public:
	Cat();
	~Cat() {
		std::cout << "Cat died\n";
		delete brain;
	}
	void addIdea(std::string idea);
	std::string getIdea(int i) const {return brain->getIdea(i);}
	void setIdea(int i, std::string idea) {brain->setIdea(i, idea);}
	Cat(const Cat& other);
	void makeSound() const;
};

#endif