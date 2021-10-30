#include "Character.hpp"

Character::Character() : name(""), size(0), inv(nullptr) {}

Character::Character(std::string name) : name(name), size(0), inv(nullptr) {}

Character::Character(const Character& other)
{
	if (inv)
	{
		for (int i = 0; i < this->size; i++)
			delete inv[i];
		delete inv;
	}
	inv = new AMateria*[other.getSize()];
	for (int i = 0; i < other.getSize(); i++)
		inv[i] = other.getMatIdx(i);
	name = other.getName();
	size = other.getSize();
}

const Character& Character::operator=(const Character& other)
{
	if (inv)
	{
		for (int i = 0; i < this->size; i++)
			delete inv[i];
		delete inv;
	}
	inv = new AMateria*[other.getSize()];
	for (int i = 0; i < other.getSize(); i++)
		inv[i] = other.getMatIdx(i);
	name = other.getName();
	size = other.getSize();
	return *this;
}

AMateria* Character::getMatIdx(int i) const
{
	if (i >= 0 && i < this->size)
		return inv[i];
	return(nullptr);
}

Character::~Character()
{
	if (inv)
	{
		for (int i = 0; i < this->size; i++)
			if (inv[i])
				delete inv[i];	
		delete[] inv;
	}
}

void Character::equip(AMateria* m)
{
	if (this->size == 4)
		return;
	AMateria** cpy = new AMateria*[size + 1];
	for (int i = 0; i < size; i++)
		cpy[i] = inv[i];
	cpy[size] = m;
	if (inv)
		delete[] inv;
	this->inv = cpy;
	this->size++;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->size)
	{
		AMateria** cpy = new AMateria*[size - 1];
		int j = 0;
		for (int i = 0; i < size; i++)
		{
			if (i != idx)
				cpy[j++] = inv[i];
		}
		if (inv)
			delete[] inv;
		this->inv = cpy;
		this->size--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->size)
		inv[idx]->use(target);
}