#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	int size;
	std::string* ideas;
public:
	Brain();
	~Brain();
	void add_idea(std::string idea);
	std::string getIdea(int i) const {return ideas[i];}
	void setIdea(int i, std::string idea) {ideas[i] = idea;}
	int getSize() const {return this->size;}
};

#endif