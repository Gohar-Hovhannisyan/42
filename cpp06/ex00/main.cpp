#include "Convert.hpp"

int main(int ac, char** av)
{
	if (ac > 1)
	{
		Convert c;
		std::string temp = av[1];
		if (temp == "nan" || temp == "+inf" || temp == "-inf")
			c.toChange(temp);
		else if (temp == "nanf" || temp == "+inff" || temp == "-inff")
			c.toChange(temp);
		else if (strlen(av[1]) == 1)
		{
			std::cout << "char: " << av[1][0] << std::endl;
			std::cout << "int: impossible\n";
			std::cout << "float: impossible\n";
			std::cout << "double: impossible\n";
		}
		else
		{
			c.toChangeNum(av[1]);
			c.toChar();
			c.toInt();
			c.toFloat();
			c.toDouble();
		}
	}
	return (0);
}
