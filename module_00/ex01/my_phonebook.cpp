#include "my_phonebook.hpp"

static std::string get_str_from_user()
{
	std::string str;

	std::cin >> str;
	return str;
}

void Phonebook::add()
{
	std::cout << "Pls write first name:" << std::endl;
	person_array[count].set_first_name(get_str_from_user());
	std::cout << "Pls write last name:" << std::endl;
	person_array[count].set_last_name(get_str_from_user());
	std::cout << "Pls write nickname:" << std::endl;
	person_array[count].set_nickname(get_str_from_user());
	std::cout << "Pls write phone_number:" << std::endl;
	person_array[count].set_phone_number(get_str_from_user());
	std::cout << "Pls write darkest secret:" << std::endl;
	person_array[count].set_darkest_secret(get_str_from_user());
	if (count == (num_of_persons - 1))
		count = 0;
	else
		count++;
}

//todo вроде доделал перепроверить
void Phonebook::search() {
	int i;

	print_all_persons();
	while (1) {
		std::cout << "Pls select index: ";
		std::cout >> i;
		if ((i < 0 || i > 8))
			std::cout << "Wrong index! Index must be [0,8]." << std::endl;
		if (person_array[i].is_defined() != 1)
			std::cout << "Person under this index is not defined!" << std::endl;
		person_array[i].print_full_info();
	}
}

void Phonebook::print_all_persons() {
	for (int i = 0; i < 8; i++)
	{
		if (person_array[i].is_defined())
			person_array[i].print_info();
	}
}
