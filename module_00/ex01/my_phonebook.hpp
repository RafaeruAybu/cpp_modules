#ifndef CPP_MODULE_EX00_MY_PHONEBOOK_H
#define CPP_MODULE_EX00_MY_PHONEBOOK_H

#include <iostream>
#include <string>
#include "person.hpp"

class Phonebook
{
public:
	void add();
	void search();
private:
	std::array<Person, 8> People;
	int count = 0;
	int current_oldest = 0;
};

#endif