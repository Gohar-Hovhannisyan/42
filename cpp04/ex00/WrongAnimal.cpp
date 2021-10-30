#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat is created\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat is copied\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "* wrong animal noises *\n";
}