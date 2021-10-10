#ifndef CPP_MODULE_EX00_MY_PHONEBOOK_H
#define CPP_MODULE_EX00_MY_PHONEBOOK_H

#include <iostream>
#include <string>
#include "person.hpp"

#define NUM_OF_PERSON 8

class Phonebook
{
public:
	void add();
	void search();
	void print_all_persons();
private:
	int num_of_persons = NUM_OF_PERSON;
	Person person_array[NUM_OF_PERSON];
	int count = 0;
};

#endif