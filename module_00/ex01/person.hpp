#ifndef CPP_MODULE_EX00_PERSON_HPP
#define CPP_MODULE_EX00_PERSON_HPP
#include <string>
#include <iostream>

class Person
{
public:
	Person();
	~Person();
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_phone_number(std::string phone_number);
	void set_darkest_secret(std::string darkest_secret);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
	void print_full_info();
	int is_defined();
	void define_the_def_flag();
	int is_str_equal_to_name(std::string str);
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	static int count;
	static int index;
	int flag_defined;
};

#endif