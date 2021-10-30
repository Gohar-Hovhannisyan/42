#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
	: target(target), Form("Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: target(other.getTarget()), Form(other) {}

const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	this->target = other.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (this->sgnd && this->exec >= executor.getGrade())
	{
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox\n";
	}
	else
		throw Bureaucrat::GradeTooLowException();
}