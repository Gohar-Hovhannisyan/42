#include "Inherit.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "A dog is created\n";
}

Dog::Dog(const Dog& other) : Animal("Dog")
{
	this->brain = new Brain();
	for (int i = 0; i < other.brain->getSize(); i++)
		brain->add_idea(other.brain->getIdea(i));
	std::cout << "A dog is copied\n";
}

void Dog::makeSound() const
{
	std::cout << "* woof woof *\n";
}

void Dog::addIdea(std::string idea)
{
	this->brain->add_idea(idea);
}

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "A Cat is created\n";
}

Cat::Cat(const Cat& other) : Animal("Cat")
{
	this->brain = new Brain();
	for (int i = 0; i < other.brain->getSize(); i++)
		brain->add_idea(other.brain->getIdea(i));
	std::cout << "A Cat is copied\n";
}

void Cat::makeSound() const
{
	std::cout << "* meaw meaw *\n";
}

void Cat::addIdea(std::string idea)
{
	this->brain->add_idea(idea);
}