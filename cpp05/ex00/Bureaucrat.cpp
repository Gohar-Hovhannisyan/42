#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown"), grade(75) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw tooHigh;
	else if (grade > 150)
		throw tooLow;
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: name(other.getName()), grade(other.getGrade()) {}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.getGrade();
	return *this;
}

void Bureaucrat::incGrade()
{
	grade--;
	if (grade < 1)
		throw tooHigh;
}

void Bureaucrat::decGrade()
{
	grade++;
	if (grade > 150)
		throw tooLow;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b)
{
	o << b.getName() << " bureaucrat grade " << b.getGrade() << std::endl;
	return o;
}
