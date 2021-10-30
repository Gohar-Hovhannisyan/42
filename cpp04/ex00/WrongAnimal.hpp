#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal(std::string type = "") : type(type) {}
	void makeSound() const;
	virtual ~WrongAnimal() {
		std::cout << "WrongAnimal died\n";
	}
	std::string getType() const { return this->type;}
};

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat() {
		std::cout << "WrongCat died\n";
	}
	WrongCat(const WrongCat& other);
};

#endif