#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "Form.hpp"
#include <exception>

class RobotomyRequestForm : public Form{
private:
	RobotomyRequestForm() {}
	std::string target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	const RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	~RobotomyRequestForm() {}
	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const {return target;}
	
	class Robotomized : public std::exception{
	public:
		const char* what() const throw();	
	};
};

#endif