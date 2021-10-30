#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria** inv;
	int size;
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	const MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource() {}
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	int getSize() const {return this->size;}
	AMateria* getMatIdx(int i) const;
};

#endif