#include <iostream>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		++i;
	return (i);
}

char *to_upper(char *str)
{
	for(int i = 0; i < ft_strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			std::cout << to_upper(av[i]);
		std::cout << std::endl;
	}
}