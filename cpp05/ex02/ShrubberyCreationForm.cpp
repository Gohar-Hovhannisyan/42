#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: target(target), Form("Shrubbery", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: target(other.getTarget()), Form(other) {}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->target = other.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::trees[3] = {
	"      /\\\n" \
	"     /\\*\\\n" \
	"    /\\O\\*\\\n" \
	"   /*/\\/\\/\\\n" \
	"  /\\O\\/\\*\\/\\\n" \
	" /\\*\\/\\*\\/\\/\\\n" \
	"/\\O\\/\\/*/\\/O/\\\n" \
	"      ||\n" \
	"      ||\n" \
	"      ||\n",
	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n",
	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n"
};

const char* ShrubberyCreationForm::CouldNotOpenFile::what() const throw()
{
	return "ShrubberyCreationForm: Could not open file";
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->sgnd && this->exec >= executor.getGrade())
	{
		std::fstream f;
		std::string name = target + "_shrubbery";
		f.open(name, std::ios::out | std::ios::app);
		if (f.is_open())
		{
			f << trees[rand() % 3];
			f.close();
		}
		else
			throw ShrubberyCreationForm::CouldNotOpenFile();
	}
	else
		throw Bureaucrat::GradeTooLowException();
}