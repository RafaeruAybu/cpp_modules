#include "my_phonebook.hpp"

Phonebook::Phonebook() {
	num_of_persons = 0;
	count = 0;
}

Phonebook::~Phonebook() {}

static std::string get_str_from_user()
{
    std::string str;

    if ( ! std::getline(std::cin, str))
        std::exit(0);
	return str;
}

static int get_int_from_user()
{
	int num;

	std::cin >> num;
	if (std::cin.eof())
	    std::exit(0);
	return num;
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

void Phonebook::search() {
	int num;

	print_all_persons();
	if (!person_array[0].is_defined())
		return ;
	std::cout << "Pleas select index: ";
	num = get_int_from_user();
	if ((num < 1 || num > 9))
	{
	    std::cout << "Wrong index! Index must be [1,8]." << std::endl;
	    std::cin.clear();
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else if (person_array[num - 1].is_defined() != 1)
	{
	    std::cout << "Person under this index is not defined!" << std::endl;
	    std::cin.clear();
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
		person_array[num - 1].print_full_info();
}

std::string truncate(std::string str)
{
	std::string ret_str;
	int i = 0;
	int j = 0;

	ret_str.insert(0, 10, ' ');	//ten spaces wide str
	while (i < (10 - (int)str.length()))	//skip spaces
		i++;
	while (i < 10)							//copy chars
		ret_str[i++] = str[j++];
	if ((int)str.length() > 10)				//if > 10 place a dot at the end
		ret_str[9] = '.';
	return (ret_str);						//ret
}

void Phonebook::print_all_persons() {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (person_array[i].is_defined())
		{
			std::cout	<< "|" << "         " << i + 1 << "|" 
						<< truncate(person_array[i].get_first_name()) << "|"
						<< truncate(person_array[i].get_last_name()) << "|"
						<< truncate(person_array[i].get_nickname()) << "|"
						<< std::endl;
		}
	}
	std::cout << "---------------------------------------------" << std::endl;
}
