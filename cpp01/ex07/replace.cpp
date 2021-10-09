#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::fstream og;
		std::fstream rp;
		std::string name = av[1];
		std::string s1 = av[2];
		if (s1.compare("") == 0)
		{
			std::cout << "S1 is empty\n";
			return (0);
		}
		std::string s2 = av[3];
		if (s2.compare("") == 0)
		{
			std::cout << "S2 is empty\n";
			return (0);
		}
		size_t pos = name.find(".");
		og.open(av[1], std::ios::in);
		if (og.is_open())
		{
			if (pos != std::string::npos)
			{
				name = name.substr(0, pos + 1);
				name += "replace";
			}
			else
				name += ".replace";
			rp.open(name, std::ios::out);
			if (rp.is_open())
			{
				std::string line;
				int pos;
				while (getline(og, line))
				{
					pos = line.find(s1, 0);
					while (pos != std::string::npos)
					{
						line = line.replace(pos, s1.length(), s2);
						pos = line.find(s1, pos + s1.length());
					}
					rp << line;
				}
				rp.close();
			}
			else
				std::cout << "New file could not be opened\n"; 
			og.close();
		}
		else
			std::cout << "File could not be opened\n";
	}
}