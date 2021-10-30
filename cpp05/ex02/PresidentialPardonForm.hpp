#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include "Form.hpp"
#include <exception>

class PresidentialPardonForm : public Form{
private:
	PresidentialPardonForm() {}
	std::string target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	const PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm() {}
	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const {return target;}
};

#endif