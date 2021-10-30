#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

class Intern{
public:
	Intern() {}
	~Intern() {}
	Intern(const Intern& other) {}
	Form* makeForm(std::string form, std::string target);
	class FormDoesntExist : public std::exception{
	public:
		const char* what() const throw();
	};
};

#endif