#include "WrongAnimal.hpp"
#include "Inherit.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* metaw = new WrongAnimal();
	const WrongAnimal* iw = new WrongCat();
	std::cout << iw->getType() << " " << std::endl;
	iw->makeSound();
	metaw->makeSound();
}