#include "Inherit.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A dog is created\n";
}

Dog::Dog(const Dog& other) : Animal("Dog")
{
	std::cout << "A dog is copied\n";
}

void Dog::makeSound() const
{
	std::cout << "* woof woof *\n";
}

Cat::Cat() : Animal("Cat")
{
	std::cout << "A Cat is created\n";
}

Cat::Cat(const Cat& other) : Animal("Cat")
{
	std::cout << "A Cat is copied\n";
}

void Cat::makeSound() const
{
	std::cout << "* meaw meaw *\n";
}