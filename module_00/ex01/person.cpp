#include "person.hpp"

Person::Person()
{
	first_name = "Undefined";
	last_name = "Undefined";
	nickname = "Undefined";
	phone_number = "Undefined";
	darkest_secret = "Undefined";
}

void Person::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	flag_defined = 1;
}

void Person::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	flag_defined = 1;
}

void Person::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	flag_defined = 1;
}

void Person::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
	flag_defined = 1;
}

void Person::set_darkest_secret(std::string secret)
{
	darkest_secret = secret;
	flag_defined = 1;
}

//reimplement this
void Person::print_info()
{
	std::cout << "index				:" << index << std::endl;
	std::cout << "first name		:" << name << std::endl;
	std::cout << "last name			:" << phone_number << std::endl;
	std::cout << "nickname			:" << nickname << std::endl;
}
