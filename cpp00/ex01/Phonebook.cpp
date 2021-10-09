#include "Phonebook.hpp"
#include "Contact.hpp"
# include <string>

int Phonebook::print(void)
{
	if (this->size == 0)
		return (0);
	for(int i = 0; i < this->size; i++)
	{
		std::string temp;
		std::cout << std::right << std::setw(10) << this->contacts[i].get_id();
		std::cout << "|";
		temp = this->contacts[i].get_name();
		if (temp.length() > 10)
		{
			temp = temp.insert(9, ".");
			temp = temp.substr(0, 10);
		}
		std::cout << std::right << std::setw(10) << temp;
		std::cout << "|";
		temp = this->contacts[i].get_last_name();
		if (temp.length() > 10)
		{
			temp = temp.insert(9, ".");
			temp = temp.substr(0, 10);
		}
		std::cout << std::right << std::setw(10) << temp;
		std::cout << "|";
		temp = this->contacts[i].get_nickname();
		if (temp.length() > 10)
		{
			temp = temp.insert(9, ".");
			temp = temp.substr(0, 10);
		}
		std::cout << std::right << std::setw(10) << temp;
		std::cout << std::endl;
	}
	return (1);
}

void Phonebook::display(int index)
{
	if (index < 1 || index > this->size)
		return ;
	std::cout << this->contacts[index - 1].get_name();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_last_name();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_nickname();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_login();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_paddress();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_eaddress();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_phone();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_bday();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_meal();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_color();
	std::cout << std::endl;
	std::cout << this->contacts[index - 1].get_secret();
	std::cout << std::endl;
}