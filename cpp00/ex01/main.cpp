#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	phonebook.size = 0;
	while (1)
	{
		std::string command;
		std::string temp;
		std::cout << "Enter Command: ";
		std::cin >> command;
		if (command.compare("EXIT") == 0)
			break;
		else if(command.compare("ADD") == 0)
		{
			if (phonebook.size >= 8)
			{
				std::cout << "Can't add any more contacts\n";
				continue ;
			}
			std::cout << "Enter the contact's name: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_name(temp);
			std::cout << "Enter the contact's last name: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_last_name(temp);
			std::cout << "Enter the contact's nickname: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_nickname(temp);
			std::cout << "Enter the contact's login: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_login(temp);
			std::cout << "Enter the contact's postal address: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_paddress(temp);
			std::cout << "Enter the contact's email address: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_eaddress(temp);
			std::cout << "Enter the contact's phone number: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_phone(temp);
			std::cout << "Enter the contact's birthday date: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_bday(temp);
			std::cout << "Enter the contact's favorite meal: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_meal(temp);
			std::cout << "Enter the contact's underwear color: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_color(temp);
			std::cout << "Enter the contact's darkest secret: ";
			std::cin >> temp;
			phonebook.contacts[phonebook.size].set_secret(temp);
			phonebook.contacts[phonebook.size].set_id(phonebook.size + 1);
			phonebook.size++;
		}
		else if(command.compare("SEARCH") == 0)
		{
			int index;
			if (phonebook.print())
			{
				std::cout << "Enter the index: ";
				std::cin >> index;
				phonebook.display(index);
			}
		}
	}
	return (0);
}