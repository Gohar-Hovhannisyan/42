#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("unknown"), grade(75) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade()
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

void Bureaucrat::signForm(Form* f)
{
	if (f->getSign() >= this->grade)
	{
		f->Sign();
		std::cout << name << " signes " << f->getName() << std::endl;
	}
	else
		std::cout << name << " cannot sign " << f->getName() << " beacuse grade is too low\n";
}

void Bureaucrat::executeForm(Form const& form)
{
	if (this->grade <= form.getExec())
	{
		form.execute(*this);
	}
	else
		throw Bureaucrat::GradeTooLowException();
}
