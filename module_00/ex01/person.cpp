#include "person.hpp"

int Person::count = 0;

Person::Person()
{
	index = count;
	count++;
	first_name = "Undefined";
	last_name = "Undefined";
	nickname = "Undefined";
	phone_number = "Undefined";
	darkest_secret = "Undefined";
}

Person::~Person() {}

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

void Person::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
	flag_defined = 1;
}

//todo short_info
void Person::print_info()
{
	std::cout << "index				:" << index << std::endl;
	std::cout << "first name			:" << first_name << std::endl;
	std::cout << "last name			:" << last_name << std::endl;
	std::cout << "nickname			:" << nickname << std::endl;
}

//todo full_info line per line
void Person::print_full_info()
{
	std::cout << "index				:" << index << std::endl;
	std::cout << "first name			:" << first_name << std::endl;
	std::cout << "last name			:" << last_name << std::endl;
	std::cout << "nickname			:" << nickname << std::endl;
}

int Person::is_defined() {
	return flag_defined;
}

void Person::define_the_def_flag() {
	flag_defined = 1;
}

int Person::is_str_equal_to_name(std::string str)
{
	if (str.compare(first_name) == 0)
		return 1;
	return 0;
}