#ifndef CPP_MODULE_EX00_MY_PHONEBOOK_H
#define CPP_MODULE_EX00_MY_PHONEBOOK_H

#include <iostream>
#include <string>
#include "person.hpp"

class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	void add();
	void search();
	void print_all_persons();
private:
	int num_of_persons;
	Person person_array[8];
	int count;
};

#endif