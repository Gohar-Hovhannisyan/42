#include "Inherit.hpp"

int main()
{
	Animal* zoo[6];
	for (int i = 0; i < 3; i++)
		zoo[i] = new Dog();
	for (int i = 3; i < 6; i++)
		zoo[i] = new Cat();
	for (int i = 0; i < 6; i++)
		zoo[i]->makeSound();

	for (int i = 0; i < 6; i++)
		zoo[i]->addIdea("another idea");

	Cat copycat = *(dynamic_cast<Cat*>(zoo[4]));

	std::cout << copycat.getIdea(0) << std::endl;
	zoo[4]->setIdea(0, "new idea");
	std::cout << zoo[4]->getIdea(0) << std::endl;
	std::cout << copycat.getIdea(0) << std::endl;

	for (int i = 0; i < 6; i++)
		delete zoo[i];
	
}