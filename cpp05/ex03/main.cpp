#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("someone",100);
		Form* f1 = new ShrubberyCreationForm("target1");
		Form* f2 = new PresidentialPardonForm("target2");
		Form* f3 = new RobotomyRequestForm("target3");
		std::cout << b;
		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;
		f1->beSigned(b);
		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;
		f1->execute(b);
		// f2->execute(b);
		// f3->execute(b);
		delete f1;
		delete f2;
		delete f3;
		try
		{
			Intern  someRandomIntern;
			Form*   rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
