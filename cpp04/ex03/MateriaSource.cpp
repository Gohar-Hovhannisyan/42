#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : inv(nullptr), size(0) {}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	if (inv)
	{
		for (int i = 0; i < this->size; i++)
			delete inv[i];
		delete[] inv;
	}
	inv = new AMateria*[other.getSize()];
	for (int i = 0; i < other.getSize(); i++)
		inv[i] = other.getMatIdx(i);
	size = other.getSize();
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (inv)
	{
		for (int i = 0; i < this->size; i++)
			delete inv[i];
		delete[] inv;
	}
	inv = new AMateria*[other.getSize()];
	for (int i = 0; i < other.getSize(); i++)
		inv[i] = other.getMatIdx(i);
	size = other.getSize();
	return *this;
}


AMateria* MateriaSource::getMatIdx(int i) const
{
	if (i >= 0 && i < this->size)
		return inv[i];
	return(nullptr);
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < this->size; i++)
	{
		if (inv[i]->getType() == type)
		{
			AMateria** cpy = new AMateria*;
			(*cpy) = inv[i];
			return *cpy;
		}
	}
	return nullptr;
}