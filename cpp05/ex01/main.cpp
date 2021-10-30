#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("someone", 22);
		Form f("a form", 23, 54);
		std::cout << b;
		std::cout << f;
		f.beSigned(b);
		std::cout << f;
		b.decGrade();
		b.decGrade();
		b.signForm(f);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}