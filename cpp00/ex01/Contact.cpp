#include "Contact.hpp"

Contact::Contact(void)
{
	this->first_name = "";
}

void Contact::set_name(std::string name)
{
	this->first_name = name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_login(std::string login)
{
	this->login = login;
}

void Contact::set_paddress(std::string addr)
{
	this->postal_address = addr;
}

void Contact::set_eaddress(std::string addr)
{
	this->email_address = addr;
}

void Contact::set_phone(std::string phone)
{
	this->phone_number = phone;
}

void Contact::set_bday(std::string bday)
{
	this->birthday_date = bday;
}

void Contact::set_meal(std::string meal)
{
	this->favourite_meal = meal;
}

void Contact::set_color(std::string color)
{
	this->underwear_color = color;
}

void Contact::set_secret(std::string secret)
{
	this->darkest_secret = secret;
}

void Contact::set_id(int id)
{
	this->index = id;
}

std::string Contact::get_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_login(void)
{
	return (this->login);
}

std::string Contact::get_paddress(void)
{
	return (this->postal_address);
}

std::string Contact::get_eaddress(void)
{
	return (this->email_address);
}

std::string Contact::get_phone(void)
{
	return (this->phone_number);
}

std::string Contact::get_bday(void)
{
	return (this->birthday_date);
}

std::string Contact::get_meal(void)
{
	return (this->favourite_meal);
}

std::string Contact::get_color(void)
{
	return (this->underwear_color);
}

std::string Contact::get_secret(void)
{
	return (this->darkest_secret);
}

int Contact::get_id(void)
{
	return (this->index);
}