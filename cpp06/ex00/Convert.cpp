#include "Convert.hpp"

float Convert::toChangeNum(std::string str)
{
	this->general = std::stof(str);
	return this->general;
}

void Convert::toChar() const
{
	char c = static_cast<char>(this->general);
	std::cout << "char: ";
	if (c >= 32 && c <= 126)
		std::cout << "\'" << c << "\'" << std::endl;
	else
		std::cout << "Non displayable\n";
}

void Convert::toInt() const
{
	int i = static_cast<int>(this->general);
	std::cout << "int: ";
	if (i != std::numeric_limits<int>::min() && i != std::numeric_limits<int>::max())
		std::cout << i << std::endl;
	else
		std::cout << "Outside the limit\n";
}

void Convert::toFloat() const
{
	std::stringstream ss;
	std::string check;

	std::cout << "float: ";
	if (this->general != std::numeric_limits<float>::min() && this->general != std::numeric_limits<float>::max())
	{
		ss << this->general;
		ss >> check;
		if (check.find(".", 0) == std::string::npos)
			std::cout << this->general << ".0f" << std::endl;
		else
			std::cout << this->general << "f" << std::endl;
	}
	else
		std::cout << "Outside the limit\n";
}

void Convert::toDouble() const
{
	std::stringstream ss;
	std::string check;

	double d = static_cast<double>(this->general);
	std::cout << "double: ";
	if (d != std::numeric_limits<double>::min() && d != std::numeric_limits<double>::max())
	{
		ss << d;
		ss >> check;
		if (check.find(".", 0) == std::string::npos)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	else
		std::cout << "Outside the limit\n";
}

void Convert::toChange(std::string str)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: " << str << "f\n";
	std::cout << "double: " << str << std::endl;
}

void Convert::toChangeF(std::string str)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: " << str << std::endl;
	std::cout << "double: " << str.substr(0, str.length() - 1);
}