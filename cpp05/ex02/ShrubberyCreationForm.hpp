#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include "Form.hpp"
#include <exception>

class ShrubberyCreationForm : public Form{
private:
	ShrubberyCreationForm() {}
	std::string target;
	static std::string trees[3];
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm() {}
	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const {return target;}
	
	class CouldNotOpenFile : public std::exception{
	public:
		const char* what() const throw();	
	};
};

#endif