#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat{
private:
	std::string const name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat() {}
	Bureaucrat(const Bureaucrat& other);
	const Bureaucrat& operator=(const Bureaucrat& other);
	const std::string getName() const {return this->name;}
	int getGrade() const {return this->grade;}
	void incGrade();
	void decGrade();
	void signForm(Form* f);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	} tooHigh;

	class GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	} tooLow;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif