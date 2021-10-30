#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form{
protected:
	std::string const name;
	bool sgnd;
	int const sign;
	int const exec;
public:
	Form();
	Form(std::string name, int sign, int exec);
	Form(const Form& other);
	const Form& operator=(const Form& other);
	virtual ~Form() {}
	std::string const getName() const {return this->name;}
	bool isSigned() const {return this->sgnd;}
	int const getSign() const {return this->sign;}
	int const getExec() const {return this->exec;}
	void beSigned(Bureaucrat b);
	void Sign() {this->sgnd = true;}
	virtual void execute(Bureaucrat const& executor) const = 0;

	class GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, const Form& b);

#endif