#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: target(target), Form("Robot", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: target(other.getTarget()), Form(other) {}

const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->target = other.getTarget();
	return *this;
}

const char* RobotomyRequestForm::Robotomized::what() const throw()
{
	return "RobotomyRequestForm: could not robotomize\n";
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->sgnd && this->exec >= executor.getGrade())
	{
		if (rand() % 2)
			std::cout << "* drilling noises *" << this->target << " has  been robotomized successfully\n";
		else
			throw RobotomyRequestForm::Robotomized();
	}
	else
		throw Bureaucrat::GradeTooLowException();
}