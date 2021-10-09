#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "Contact.hpp"

class Phonebook{
public:
	Contact contacts[8];
	int 	size;
	int print(void);
	void display(int index);
};

#endif