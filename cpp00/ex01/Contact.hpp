#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact{
public:
	Contact(void);
	void set_name(std::string name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_login(std::string login);
	void set_paddress(std::string addr);
	void set_eaddress(std::string addr);
	void set_phone(std::string phone);
	void set_bday(std::string bday);
	void set_meal(std::string meal);
	void set_color(std::string color);
	void set_secret(std::string secret);
	void set_id(int id);
	std::string get_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_login(void);
	std::string get_paddress(void);
	std::string get_eaddress(void);
	std::string get_phone(void);
	std::string get_bday(void);
	std::string get_meal(void);
	std::string get_color(void);
	std::string get_secret(void);
	int get_id(void);
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favourite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	int index;
};

#endif