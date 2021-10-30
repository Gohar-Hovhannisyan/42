#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("someone", 147);
		std::cout << b;
		b.decGrade();
		b.incGrade();
		b.decGrade();
		b.decGrade();
		b.decGrade();
		b.decGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}