#include "Form.hpp"

Form::Form() : name("unknown"), sgnd(false), sign(75), exec(75) {}

Form::Form(std::string name, int sign, int exec) 
	: name(name), sgnd(false), sign(sign), exec(exec) {}

Form::Form(const Form& other) 
	: name(other.getName()), sgnd(other.isSigned()), sign(other.getSign()), exec(other.getExec()) {}

const Form& Form::operator=(const Form& other)
{
	this->sgnd = other.isSigned();
	return *this;
}

void Form::beSigned(Bureaucrat b)
{
	if (this->sign >= b.getGrade())
		this->sgnd = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& o, const Form& b)
{
	if (b.isSigned())
		o << b.getName() << " is signed\n";
	else
		o << b.getName() << " is not signed\n";
	return o;
}