#include "Intern.hpp"

Form* createPresidential(std::string target) {return new PresidentialPardonForm(target);}
Form* createRobotomy(std::string target) {return new RobotomyRequestForm(target);}
Form* createShrubbery(std::string target) {return new ShrubberyCreationForm(target);}

typedef Form* (*func)(std::string target);

typedef struct s_data
{
	std::string name;
	func f;
} data;


Form* Intern::makeForm(std::string form, std::string target)
{
	Form* ret = nullptr;
	data forms [] = {
		{"presidential pardon", &createPresidential},
		{"robotomy request", &createRobotomy},
		{"shrubbery creation", createShrubbery}
	};
	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i].name)
		{
			ret = forms[i].f(target);
			return ret;
		}
	}
	throw Intern::FormDoesntExist();
	return ret;
}

const char* Intern::FormDoesntExist::what() const throw()
{
	return "Form does not exist";
}
